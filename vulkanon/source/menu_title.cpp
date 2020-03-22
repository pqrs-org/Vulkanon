#include <gba.h>
#include "menu_common.hpp"
#include "menu_title.hpp"
#include "libgbakey.hpp"
#include "imagehandler.hpp"
#include "soundhandler.hpp"
#include "fixed.hpp"

void
MenuTitle::doLoop(void)
{
  int wait = 0;

  MenuCommon::loop_initialize();
  setupFont();

  drawAllText();

  for (;;) {
    GBAKey::scanKeys();
    u32 keysDown = GBAKey::getKeysDown();
    u32 keysHeld = GBAKey::getKeysHeld();

    if (keysDown & KEY_A) {
      MenuCommon::playSE_select();
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
              selectedIndex = END_OF_GAMEMODE - 1;
            } else {
              --selectedIndex;
            }
          } else {
            ++selectedIndex;
            if (selectedIndex >= END_OF_GAMEMODE) {
              selectedIndex = 0;
            }
          }
          drawAllText();
        }
      }
    }
    VBlankIntrWait();
  }

  MenuCommon::loop_terminate();
}


void
MenuTitle::drawAllText(void)
{
  MenuCommon::clearAllText();

  int bgmapIndex = ImageHandler::BGMAP_INDEX_MENU_TEXT;

  FontHandler::drawString(2, 4, ImageHandler::BGCOLOR_FONT_GREEN, si_selectMode, bgmapIndex);

  int tileX = 1;
  int tileY = 6;
  int palette;

  palette = ImageHandler::BGCOLOR_FONT_WHITE + (selectedIndex == GAMEMODE_PLAY_LEVEL0);
  ImageHandler::drawBGMenuCircle(tileX, tileY, palette);
  FontHandler::drawString(tileX + 1, tileY, palette, si_play_L0, bgmapIndex);

  tileY += 2;

  palette = ImageHandler::BGCOLOR_FONT_WHITE + (selectedIndex == GAMEMODE_PLAY_LEVEL1);
  ImageHandler::drawBGMenuCircle(tileX, tileY, palette);
  FontHandler::drawString(tileX + 1, tileY, palette, si_play_L1, bgmapIndex);

  tileY += 2;

  palette = ImageHandler::BGCOLOR_FONT_WHITE + (selectedIndex == GAMEMODE_PLAY_LEVEL2);
  ImageHandler::drawBGMenuCircle(tileX, tileY, palette);
  FontHandler::drawString(tileX + 1, tileY, palette, si_play_L2, bgmapIndex);

  tileY += 2;

  palette = ImageHandler::BGCOLOR_FONT_WHITE + (selectedIndex == GAMEMODE_PLAY_LEVEL3);
  ImageHandler::drawBGMenuCircle(tileX, tileY, palette);
  FontHandler::drawString(tileX + 1, tileY, palette, si_play_L3, bgmapIndex);

  tileY += 2;

  palette = ImageHandler::BGCOLOR_FONT_WHITE + (selectedIndex == GAMEMODE_VIEW_REPLAY);
  ImageHandler::drawBGMenuCircle(tileX, tileY, palette);
  FontHandler::drawString(tileX + 1, tileY, palette, si_viewReplay, bgmapIndex);

  tileY += 2;
  palette = ImageHandler::BGCOLOR_FONT_WHITE + (selectedIndex == GAMEMODE_CREDITS);
  ImageHandler::drawBGMenuCircle(tileX, tileY, palette);
  FontHandler::drawString(tileX + 1, tileY, palette, si_credits, bgmapIndex);
}

void
MenuTitle::setupFont(void)
{
  FontHandler::makeString(&si_selectMode, 0, "[ Select Mode ]");
  FontHandler::makeString(&si_play_L0, 0, " Play [ Level 0 ]");
  FontHandler::makeString(&si_play_L1, 0, " Play [ Level 1 ]");
  FontHandler::makeString(&si_play_L2, 0, " Play [ Level 2 ]");
  FontHandler::makeString(&si_play_L3, 0, " Play [ Level 3 ]");
  FontHandler::makeString(&si_viewReplay, 0, " View Replay & DemoPlay");
  FontHandler::makeString(&si_credits, 0, " Credits");
}
