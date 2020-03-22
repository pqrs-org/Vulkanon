#include <gba.h>
#include "menu_common.hpp"
#include "menu_replaylist.hpp"
#include "imagehandler.hpp"
#include "soundhandler.hpp"
#include "libgbakey.hpp"
#include "simplestring.hpp"

bool
MenuReplayList::doLoop()
{
  initialize();

  MenuCommon::loop_initialize();
  setupFont();

  int wait = 0;
  bool isSelected = true;

  drawAllText();

  for (;;) {
    GBAKey::scanKeys();
    u32 keysDown = GBAKey::getKeysDown();
    u32 keysHeld = GBAKey::getKeysHeld();

    if (keysDown & KEY_A) {
      MenuCommon::playSE_select();
      isSelected = true;
      break;
    }
    if (keysDown & KEY_B) {
      MenuCommon::playSE_cancel();
      isSelected = false;
      break;
    }

    if (!(keysHeld & DPAD)) {
      wait = 0;
    } else {
      if (wait > 0) {
        --wait;
      } else {
        wait = 10;

        if (keysHeld & (KEY_UP | KEY_DOWN)) {
          MenuCommon::playSE_click();
          if (keysHeld & KEY_UP) {
            if (selectedIndex == 0) {
              selectedIndex = lineSize - 1;
            } else {
              --selectedIndex;
            }
            if (! isPosValid()) {
              setPosBottom();
            }
          } else {
            ++selectedIndex;
            if (selectedIndex >= lineSize) {
              selectedIndex = 0;
            }
            if (! isPosValid()) {
              setPosTop();
            }
          }
        }

        if (keysHeld & (KEY_LEFT | KEY_RIGHT)) {
          MenuCommon::playSE_changepage();

          isDemoPlay = ! isDemoPlay;
          setPosTop();

          setupFont();
        }

        drawAllText();
      }
    }

    VBlankIntrWait();
  }

  MenuCommon::loop_terminate();
  return isSelected;
}

void
MenuReplayList::drawAllText(void)
{
  MenuCommon::clearAllText();

  int bgmapIndex = ImageHandler::BGMAP_INDEX_MENU_TEXT;

  FontHandler::drawString(2, 4, ImageHandler::BGCOLOR_FONT_GREEN, si_selectReplay, bgmapIndex);

  ImageHandler::drawBGMenuLeftArrow(0, 4, ImageHandler::BGCOLOR_FONT_GREEN);
  ImageHandler::drawBGMenuRightArrow(29, 4, ImageHandler::BGCOLOR_FONT_GREEN);

  int tileX = 1;
  int tileY = 6;

  int lineIndex = 0;
  for (int i = 0; i < lineSize; ++i) {
    Line *p = line + i;
    if (p->isDemoPlay != isDemoPlay) {
      continue;
    }

    if (si_lineTitle[lineIndex].getSize() == 0) {
      break;
    }

    int palette = ImageHandler::BGCOLOR_FONT_WHITE + (i == selectedIndex);

    ImageHandler::drawBGMenuCircle(tileX, tileY, palette);
    FontHandler::drawString(tileX + 1, tileY, palette, si_lineTitle[lineIndex], bgmapIndex);
    FontHandler::drawString(tileX + 3, tileY + 1, palette, si_lineInfo[lineIndex], bgmapIndex);

    tileY += 3;
    ++lineIndex;
  }
}


void
MenuReplayList::initialize()
{
  memset(line, 0, sizeof(line));
  lineSize = 0;

  pushToList(Replay::REPLAY_TYPE_BESTSCORE_LEVEL0, false);
  pushToList(Replay::REPLAY_TYPE_BESTSCORE_LEVEL1, false);
  pushToList(Replay::REPLAY_TYPE_BESTSCORE_LEVEL2, false);
  pushToList(Replay::REPLAY_TYPE_BESTSCORE_LEVEL3, false);
  pushToList(Replay::REPLAY_TYPE_BESTSCORE_LEVEL0, true);
  pushToList(Replay::REPLAY_TYPE_BESTSCORE_LEVEL1, true);
  pushToList(Replay::REPLAY_TYPE_BESTSCORE_LEVEL2, true);
  pushToList(Replay::REPLAY_TYPE_BESTSCORE_LEVEL3, true);
}


void
MenuReplayList::pushToList(Replay::ReplayType type, bool isDemoPlay)
{
  SRAMFileSystem::FilePtr ptr;
  if (isDemoPlay) {
    Replay::getSavedReplay(&ptr, MainInfo::sramFS_DemoPlayData, type);
  } else {
    Replay::getSavedReplay(&ptr, MainInfo::sramFS_SRAM, type);
  }
  if (! ptr.isNULL()) {
    if (lineSize < MAX_REPLAY_NUM) {
      Line *p = line + lineSize;

      (p->replayHeader).loadFromSRAM(&ptr);
      p->isDemoPlay = isDemoPlay;

      ++lineSize;
    }
  }
}

void
MenuReplayList::setPosTop(void)
{
  selectedIndex = 0;
  for (int i = 0; i < lineSize; ++i) {
    if (line[i].isDemoPlay == isDemoPlay) {
      selectedIndex = i;
      return;
    }
  }
}

void
MenuReplayList::setPosBottom(void)
{
  selectedIndex = 0;
  for (int i = lineSize - 1; i > 0; --i) {
    if (line[i].isDemoPlay == isDemoPlay) {
      selectedIndex = i;
      return;
    }
  }
}

bool
MenuReplayList::isPosValid(void)
{
  return line[selectedIndex].isDemoPlay == isDemoPlay;
}

void
MenuReplayList::setupFont(void)
{
  MenuCommon::setMosaic();
  MenuCommon::initialize_fonthandler();

  if (! isDemoPlay) {
    FontHandler::makeString(&si_selectReplay, 0, "[ Select Replay ]");
  } else {
    FontHandler::makeString(&si_selectReplay, 0, "[ Select DemoPlay ]");
  }

  for (int i = 0; i < MAX_LEVEL; ++i) {
    si_lineTitle[i].initialize();
    si_lineInfo[i].initialize();
  }

  int lineIndex = 0;
  for (int i = 0; i < lineSize; ++i) {
    Line *p = line + i;
    if (p->isDemoPlay != isDemoPlay) {
      continue;
    }

    Replay::ReplayTypeLevel level = Replay::getReplayTypeLevel((p->replayHeader).getType());
    if (level == Replay::REPLAY_TYPE_LEVEL_0) {
      FontHandler::makeString(si_lineTitle + lineIndex, 0, " BestScore [ Level 0 ]");
    } else if (level == Replay::REPLAY_TYPE_LEVEL_1) {
      FontHandler::makeString(si_lineTitle + lineIndex, 0, " BestScore [ Level 1 ]");
    } else if (level == Replay::REPLAY_TYPE_LEVEL_2) {
      FontHandler::makeString(si_lineTitle + lineIndex, 0, " BestScore [ Level 2 ]");
    } else {
      FontHandler::makeString(si_lineTitle + lineIndex, 0, " BestScore [ Level 3 ]");
    }

    PlayTime playtime((p->replayHeader).getPlayTime());
    SimpleString<64> lineInfoString;
    lineInfoString.initialize();
    lineInfoString.append("Miss ");
    lineInfoString.append((p->replayHeader).getMissCount(), 1);
    lineInfoString.append("  Score ");
    lineInfoString.append((p->replayHeader).getScore(), 5);
    lineInfoString.append(0, 1);
    lineInfoString.append((p->replayHeader).getMissCount(), 1);
    lineInfoString.append("  Time ");
    lineInfoString.append(playtime.getMin(), 1);
    lineInfoString.append(':');
    lineInfoString.append(playtime.getSec(), 2);
    lineInfoString.append(':');
    lineInfoString.append(playtime.getMilliSec(), 2);
    FontHandler::makeString(si_lineInfo + lineIndex, 0, lineInfoString.c_str());

    ++lineIndex;
    if (lineIndex >= MAX_LEVEL) {
      break;
    }
  }
}
