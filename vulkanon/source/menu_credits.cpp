#include <gba.h>
#include "menu_common.hpp"
#include "menu_credits.hpp"
#include "libgbakey.hpp"
#include "imagehandler.hpp"
#include "soundhandler.hpp"
#include "fixed.hpp"

void
MenuCredits::doLoop(void)
{
  MenuCommon::loop_initialize();
  setupFont();

  drawAllText();

  for (;;) {
    GBAKey::scanKeys();
    u32 keysDown = GBAKey::getKeysDown();

    if (keysDown & KEY_B) {
      MenuCommon::playSE_cancel();
      break;
    }

    VBlankIntrWait();
  }

  MenuCommon::loop_terminate();
}


void
MenuCredits::drawAllText(void)
{
  MenuCommon::clearAllText();

  int bgmapIndex = ImageHandler::BGMAP_INDEX_MENU_TEXT;

  FontHandler::drawString(2, 4, ImageHandler::BGCOLOR_FONT_GREEN, si_credits, bgmapIndex);

  int tileX = 1;
  int tileY = 6;
  int palette = ImageHandler::BGCOLOR_FONT_WHITE;

  ImageHandler::drawBGMenuCircle(tileX, tileY, palette);
  FontHandler::drawString(tileX + 1, tileY, palette, si_design, bgmapIndex);
  tileY += 2;
  FontHandler::drawString(tileX + 3, tileY, palette, si_designStaffName, bgmapIndex);
  tileY += 1;
  FontHandler::drawString(tileX + 4, tileY, palette, si_designStaffURL, bgmapIndex);

  tileY += 3;

  ImageHandler::drawBGMenuCircle(tileX, tileY, palette);
  FontHandler::drawString(tileX + 1, tileY, palette, si_music, bgmapIndex);
  tileY += 2;
  FontHandler::drawString(tileX + 3, tileY, palette, si_musicStaffName, bgmapIndex);
  tileY += 1;
  FontHandler::drawString(tileX + 4, tileY, palette, si_musicStaffURL, bgmapIndex);
  tileY += 4;
}

void
MenuCredits::setupFont(void)
{
  FontHandler::makeString(&si_credits, 0, "[ Credits ]");
  FontHandler::makeString(&si_design, 0, " Design, Program, Artwork");
  FontHandler::makeString(&si_designStaffName, 0, "Takayama Fumihiko");
  FontHandler::makeString(&si_designStaffURL, 0, "http://gba.pqrs.org/");
  FontHandler::makeString(&si_music, 0, " Music");
  FontHandler::makeString(&si_musicStaffName, 0, "Nullsleep");
  FontHandler::makeString(&si_musicStaffURL, 0, "http://www.nullsleep.com/");
}
