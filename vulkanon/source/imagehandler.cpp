#include "imagehandler.hpp"
#include "common.hpp"

void
ImageHandler::setupSprite(void)
{
  u16 *vram = static_cast<u16 *>OBJ_BASE_ADR;

  vram = TILEINFO_spr_transparent::copyImage(vram);
  vram = TILEINFO_spr_bullet::copyImage(vram);
  vram = TILEINFO_spr_root_bullet::copyImage(vram);
  vram = TILEINFO_spr_suicide_bullet_target_self::copyImage(vram);
  vram = TILEINFO_spr_explode::copyImage(vram);
  vram = TILEINFO_spr_shot_normal::copyImage(vram);
  vram = TILEINFO_spr_self::copyImage(vram);
  vram = TILEINFO_spr_explode_self::copyImage(vram);
  vram = TILEINFO_spr_bonus::copyImage(vram);

  // setup palette
  u16 *pal = OBJ_COLORS;
  pal = TILEINFO_spr_transparent::copyPalette(pal);
  pal = TILEINFO_spr_bullet::copyPalette(pal);
  pal = TILEINFO_spr_root_bullet::copyPalette(pal);
  pal = TILEINFO_spr_suicide_bullet_target_self::copyPalette(pal);
  pal = TILEINFO_spr_suicide_bullet_original_direction::copyPalette(pal);
  pal = TILEINFO_spr_explode::copyPalette(pal);
  pal = TILEINFO_spr_shot_normal::copyPalette(pal);
  pal = TILEINFO_spr_shot_fullpower::copyPalette(pal);
  pal = TILEINFO_spr_self::copyPalette(pal);
  pal = TILEINFO_spr_explode_self::copyPalette(pal);
  pal = TILEINFO_spr_bonus::copyPalette(pal);
}

void
ImageHandler::setupTile(void)
{
  u16 *vram = static_cast<u16 *>(CHAR_BASE_ADR(BGBASEADDR));

  vram = TILEINFO_bg_transparent::copyImage(vram);
  vram = TILEINFO_bg_background::copyImage(vram);

  vram = TILEINFO_bg_menu_logo::copyImage(vram);
  vram = TILEINFO_bg_menu_url::copyImage(vram);
  vram = TILEINFO_bg_menu_circle::copyImage(vram);
  vram = TILEINFO_bg_menu_leftarrow::copyImage(vram);
  vram = TILEINFO_bg_menu_rightarrow::copyImage(vram);

  vram = TILEINFO_bg_horizontal_laser::copyImage(vram);

  vram = TILEINFO_bg_status::copyImage(vram);
  vram = TILEINFO_bg_number::copyImage(vram);
  vram = TILEINFO_bg_replay::copyImage(vram);

  vram = TILEINFO_bg_result_border_bg::copyImage(vram);
  vram = TILEINFO_bg_result_border_top::copyImage(vram);
  vram = TILEINFO_bg_result_border_bottom::copyImage(vram);
  vram = TILEINFO_bg_result_timeover::copyImage(vram);
  vram = TILEINFO_bg_result_clear::copyImage(vram);
  vram = TILEINFO_bg_result_bestscore::copyImage(vram);
  vram = TILEINFO_bg_result_pressstart::copyImage(vram);
  vram = TILEINFO_bg_result_replaysaved::copyImage(vram);

  vram = TILEINFO_bg_boss_body::copyImage(vram);
  vram = TILEINFO_bg_boss_core_1::copyImage(vram);
  vram = TILEINFO_bg_boss_shield::copyImage(vram);

  u16 *pal = BG_COLORS;
  pal = TILEINFO_bg_transparent::copyPalette(pal);
  pal = TILEINFO_bg_background::copyPalette(pal);
  pal = TILEINFO_bg_font_white::copyPalette(pal);
  pal = TILEINFO_bg_font_red::copyPalette(pal);
  pal = TILEINFO_bg_font_green::copyPalette(pal);
  pal = TILEINFO_bg_horizontal_laser::copyPalette(pal);
  pal = TILEINFO_bg_boss_body::copyPalette(pal);
  pal = TILEINFO_bg_boss_body_damaged::copyPalette(pal);
  pal = TILEINFO_bg_boss_core_1::copyPalette(pal);
  pal = TILEINFO_bg_boss_core_2::copyPalette(pal);
  pal = TILEINFO_bg_boss_core_3::copyPalette(pal);
  pal = TILEINFO_bg_boss_core_4::copyPalette(pal);
  pal = TILEINFO_bg_boss_shield::copyPalette(pal);

  initializeBGMAP_BG();
}

void
ImageHandler::initializeBGMAP_BG(void)
{
  u16 *bgmap = static_cast<u16 *>(MAP_BASE_ADR(BGMAP_INDEX_BG));
  for (int i = 0; i < 32 * 32; ++i) {
    *bgmap++ = ImageResource::getTileIndex<ImageResource::BG_BACKGROUND>::value | BG_PALETTE(BGCOLOR_GRAY);
  }
}

void
ImageHandler::clearBGMAP(int mapBaseAdr)
{
  u16 *bgmap = static_cast<u16 *>(MAP_BASE_ADR(mapBaseAdr));
  for (int i = 0; i < 32 * 32; ++i) {
    *bgmap++ = ImageResource::getTileIndex<ImageResource::BG_TRANSPARENT>::value;
  }
}

void
ImageHandler::drawBGMenuCircle(int x, int y, int palette)
{
  drawImage(x, y, ImageResource::getTileIndex<ImageResource::BG_MENU_CIRCLE>::value,
            TILEINFO_bg_menu_circle::w,
            TILEINFO_bg_menu_circle::h,
            palette,
            BGMAP_INDEX_MENU_TEXT);
}

void
ImageHandler::drawBGMenuLeftArrow(int x, int y, int palette)
{
  drawImage(x, y, ImageResource::getTileIndex<ImageResource::BG_MENU_LEFTARRAW>::value,
            TILEINFO_bg_menu_leftarrow::w,
            TILEINFO_bg_menu_leftarrow::h,
            palette,
            BGMAP_INDEX_MENU_TEXT);
}

void
ImageHandler::drawBGMenuRightArrow(int x, int y, int palette)
{
  drawImage(x, y, ImageResource::getTileIndex<ImageResource::BG_MENU_RIGHTARRAW>::value,
            TILEINFO_bg_menu_rightarrow::w,
            TILEINFO_bg_menu_rightarrow::h,
            palette,
            BGMAP_INDEX_MENU_TEXT);
}

void
ImageHandler::drawBGStatus(void)
{
  drawImage(0, 0, ImageResource::getTileIndex<ImageResource::BG_STATUS>::value,
            TILEINFO_bg_status::w,
            TILEINFO_bg_status::h,
            BGCOLOR_FONT_WHITE,
            BGMAP_INDEX_GAME_STATUS);
}

void
ImageHandler::drawBGReplay(void)
{
  drawImage(30 - TILEINFO_bg_replay::w, 1, ImageResource::getTileIndex<ImageResource::BG_REPLAY>::value,
            TILEINFO_bg_replay::w,
            TILEINFO_bg_replay::h,
            BGCOLOR_FONT_GREEN,
            BGMAP_INDEX_GAME_STATUS);
}

void
ImageHandler::drawBGResultBorder(void)
{
  for (int i = 0; i < 32; ++i) {
    drawImage(i, 7, ImageResource::getTileIndex<ImageResource::BG_RESULT_BORDER_TOP>::value,
              TILEINFO_bg_result_border_top::w,
              TILEINFO_bg_result_border_top::h,
              BGCOLOR_GRAY,
              BGMAP_INDEX_GAME_STATUS);
    for (int y = 8; y < 12; ++y) {
      drawImage(i, y, ImageResource::getTileIndex<ImageResource::BG_RESULT_BORDER_BG>::value,
                TILEINFO_bg_result_border_bg::w,
                TILEINFO_bg_result_border_bg::h,
                BGCOLOR_GRAY,
                BGMAP_INDEX_GAME_STATUS);
    }
    drawImage(i, 12, ImageResource::getTileIndex<ImageResource::BG_RESULT_BORDER_BOTTOM>::value,
              TILEINFO_bg_result_border_bottom::w,
              TILEINFO_bg_result_border_bottom::h,
              BGCOLOR_GRAY,
              BGMAP_INDEX_GAME_STATUS);
  }
}

void
ImageHandler::drawBGResultTimeOver(void)
{
  drawImage(15 - TILEINFO_bg_result_timeover::w / 2, 8,
            ImageResource::getTileIndex<ImageResource::BG_RESULT_TIMEOVER>::value,
            TILEINFO_bg_result_timeover::w,
            TILEINFO_bg_result_timeover::h,
            BGCOLOR_GRAY,
            BGMAP_INDEX_GAME_STATUS);
}

void
ImageHandler::drawBGResultClear(void)
{
  drawImage(15 - TILEINFO_bg_result_clear::w / 2, 8,
            ImageResource::getTileIndex<ImageResource::BG_RESULT_CLEAR>::value,
            TILEINFO_bg_result_clear::w,
            TILEINFO_bg_result_clear::h,
            BGCOLOR_GRAY,
            BGMAP_INDEX_GAME_STATUS);
}

void
ImageHandler::drawBGResultBestScore(void)
{
  drawImage(1, 8, ImageResource::getTileIndex<ImageResource::BG_RESULT_BESTSCORE>::value,
            TILEINFO_bg_result_bestscore::w,
            TILEINFO_bg_result_bestscore::h,
            BGCOLOR_GRAY,
            BGMAP_INDEX_GAME_STATUS);
}

void
ImageHandler::drawBGResultPressStart(void)
{
  drawImage(15 - TILEINFO_bg_result_pressstart::w / 2, 11,
            ImageResource::getTileIndex<ImageResource::BG_RESULT_PRESSSTART>::value,
            TILEINFO_bg_result_pressstart::w,
            TILEINFO_bg_result_pressstart::h,
            BGCOLOR_GRAY,
            BGMAP_INDEX_GAME_STATUS);
}

void
ImageHandler::drawBGResultReplaySaved(void)
{
  drawImage(18, 9,
            ImageResource::getTileIndex<ImageResource::BG_RESULT_REPLAYSAVED>::value,
            TILEINFO_bg_result_replaysaved::w,
            TILEINFO_bg_result_replaysaved::h,
            BGCOLOR_GRAY,
            BGMAP_INDEX_GAME_STATUS);
}
