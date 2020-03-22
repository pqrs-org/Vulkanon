#ifndef IMAGEHANDLER_HPP
#define IMAGEHANDLER_HPP

#include <gba.h>

#include "img/allinc.cpp"
#include "boost/static_assert.hpp"

namespace ImageResource {
  enum {
    // ------------------------------------------------------------
    BG_TRANSPARENT = 0,
    BG_BACKGROUND,

    BG_MENU_LOGO,
    BG_MENU_URL,
    BG_MENU_CIRCLE,
    BG_MENU_LEFTARRAW,
    BG_MENU_RIGHTARRAW,

    BG_HORIZONTAL_LASER,

    BG_STATUS,
    BG_NUMBER,
    BG_REPLAY,

    BG_RESULT_BORDER_BG,
    BG_RESULT_BORDER_TOP,
    BG_RESULT_BORDER_BOTTOM,
    BG_RESULT_TIMEOVER,
    BG_RESULT_CLEAR,
    BG_RESULT_BESTSCORE,
    BG_RESULT_PRESSSTART,
    BG_RESULT_REPLAYSAVED,

    BG_BOSS_BODY,
    BG_BOSS_CORE,
    BG_BOSS_SHIELD,

    END_OF_BG,

    // ------------------------------------------------------------
    SPR_TRANSPARENT,
    SPR_BULLET,
    SPR_ROOT_BULLET,
    SPR_SUICIDE_BULLET,
    SPR_EXPLODE,
    SPR_SHOT,
    SPR_SELF,
    SPR_EXPLODE_SELF,
    SPR_BONUS,
    END_OF_SPR,
  };

  template <int n> struct getTileSize { enum { value = 0 }; };
  template <> struct getTileSize<BG_TRANSPARENT> { enum { value = TILEINFO_bg_transparent::size }; };
  template <> struct getTileSize<BG_BACKGROUND> { enum { value = TILEINFO_bg_background::size }; };

  template <> struct getTileSize<BG_MENU_LOGO> { enum { value = TILEINFO_bg_menu_logo::size }; };
  template <> struct getTileSize<BG_MENU_URL> { enum { value = TILEINFO_bg_menu_url::size }; };
  template <> struct getTileSize<BG_MENU_CIRCLE> { enum { value = TILEINFO_bg_menu_circle::size }; };
  template <> struct getTileSize<BG_MENU_LEFTARRAW> { enum { value = TILEINFO_bg_menu_leftarrow::size }; };
  template <> struct getTileSize<BG_MENU_RIGHTARRAW> { enum { value = TILEINFO_bg_menu_rightarrow::size }; };

  template <> struct getTileSize<BG_HORIZONTAL_LASER> { enum { value = TILEINFO_bg_horizontal_laser::size }; };

  template <> struct getTileSize<BG_STATUS> { enum { value = TILEINFO_bg_status::size }; };
  template <> struct getTileSize<BG_NUMBER> { enum { value = TILEINFO_bg_number::size }; };
  template <> struct getTileSize<BG_REPLAY> { enum { value = TILEINFO_bg_replay::size }; };

  template <> struct getTileSize<BG_RESULT_BORDER_BG> { enum { value = TILEINFO_bg_result_border_bg::size }; };
  template <> struct getTileSize<BG_RESULT_BORDER_TOP> { enum { value = TILEINFO_bg_result_border_top::size }; };
  template <> struct getTileSize<BG_RESULT_BORDER_BOTTOM> { enum { value = TILEINFO_bg_result_border_bottom::size }; };
  template <> struct getTileSize<BG_RESULT_TIMEOVER> { enum { value = TILEINFO_bg_result_timeover::size }; };
  template <> struct getTileSize<BG_RESULT_CLEAR> { enum { value = TILEINFO_bg_result_clear::size }; };
  template <> struct getTileSize<BG_RESULT_BESTSCORE> { enum { value = TILEINFO_bg_result_bestscore::size }; };
  template <> struct getTileSize<BG_RESULT_PRESSSTART> { enum { value = TILEINFO_bg_result_pressstart::size }; };
  template <> struct getTileSize<BG_RESULT_REPLAYSAVED> { enum { value = TILEINFO_bg_result_replaysaved::size }; };

  template <> struct getTileSize<BG_BOSS_BODY> { enum { value = TILEINFO_bg_boss_body::size }; };
  template <> struct getTileSize<BG_BOSS_CORE> { enum { value = TILEINFO_bg_boss_core_1::size }; };
  template <> struct getTileSize<BG_BOSS_SHIELD> { enum { value = TILEINFO_bg_boss_shield::size }; };

  template <> struct getTileSize<END_OF_BG> { enum { value = 0 }; };

  template <> struct getTileSize<SPR_TRANSPARENT> { enum { value = TILEINFO_spr_transparent::size }; };
  template <> struct getTileSize<SPR_BULLET> { enum { value = TILEINFO_spr_bullet::size }; };
  template <> struct getTileSize<SPR_ROOT_BULLET> { enum { value = TILEINFO_spr_root_bullet::size }; };
  template <> struct getTileSize<SPR_SUICIDE_BULLET> { enum { value = TILEINFO_spr_suicide_bullet_target_self::size }; };
  template <> struct getTileSize<SPR_EXPLODE> { enum { value = TILEINFO_spr_explode::size }; };
  template <> struct getTileSize<SPR_SHOT> { enum { value = TILEINFO_spr_shot_normal::size }; };
  template <> struct getTileSize<SPR_SELF> { enum { value = TILEINFO_spr_self::size }; };
  template <> struct getTileSize<SPR_EXPLODE_SELF> { enum { value = TILEINFO_spr_explode_self::size }; };
  template <> struct getTileSize<SPR_BONUS> { enum { value = TILEINFO_spr_bonus::size }; };

  template <int n> struct getTileIndex { enum { value = getTileIndex<n - 1>::value + getTileSize<n - 1>::value }; };
  template <> struct getTileIndex<BG_TRANSPARENT> { enum { value = 0 }; };
  template <> struct getTileIndex<SPR_TRANSPARENT> { enum { value = 0 }; };

  // We use (16 * 3) KByte for BGTILE.
  BOOST_STATIC_ASSERT((getTileIndex<END_OF_BG>::value * (4 * 8)) <= (24 * 1024));

  // We use OBJ memory as normal memory. So, OBJ Tiles <= 16 KBytes.
  // (SpriteDoubler::sortedOBJATTR uses 16 KBytes of VRAM)
  BOOST_STATIC_ASSERT((getTileIndex<END_OF_SPR>::value * (4 * 8)) <= (16 * 1024));
};

class ImageHandler {
public:
  enum Params {
    OBJTILE_EXPLODE_PATTERN = 8,
    OBJTILE_EXPLODE_SELF_PATTERN = 8,
    OBJTILE_ROOT_BULLET_PATTERN = 8,
    OBJTILE_BONUS_PATTERN = 4,

    OBJTILE_BULLET_PATTERN = 16,
    OBJTILE_SHOT_NORMAL_PATTERN = 2,
    BGTILE_BOSS_SHIELD_PATTERN = 4,
  };

  enum ObjPixelSize {
    OBJPIXEL_WIDTH_BULLET = TILEINFO_spr_bullet::w * 8,
    OBJPIXEL_HEIGHT_BULLET = TILEINFO_spr_bullet::h * 8 / OBJTILE_BULLET_PATTERN,

    OBJPIXEL_WIDTH_SHOT = TILEINFO_spr_shot_normal::w * 8,
    OBJPIXEL_HEIGHT_SHOT = TILEINFO_spr_shot_normal::h * 8 / OBJTILE_SHOT_NORMAL_PATTERN,

    OBJPIXEL_WIDTH_SELF = TILEINFO_spr_self::w * 8,
    OBJPIXEL_HEIGHT_SELF = TILEINFO_spr_self::h * 8,

    OBJPIXEL_WIDTH_EXPLODE_SELF = TILEINFO_spr_explode_self::w * 8,
    OBJPIXEL_HEIGHT_EXPLODE_SELF = TILEINFO_spr_explode_self::h * 8 / OBJTILE_EXPLODE_SELF_PATTERN,

    OBJPIXEL_WIDTH_EXPLODE = TILEINFO_spr_explode::w * 8,
    OBJPIXEL_HEIGHT_EXPLODE = TILEINFO_spr_explode::h * 8 / OBJTILE_EXPLODE_PATTERN,

    OBJPIXEL_WIDTH_BOSS_CORE = TILEINFO_bg_boss_core_1::w * 8,
    OBJPIXEL_HEIGHT_BOSS_CORE = TILEINFO_bg_boss_core_1::h * 8,

    OBJPIXEL_HEIGHT_BOSS_SHIELD = TILEINFO_bg_boss_shield::w * 8 / BGTILE_BOSS_SHIELD_PATTERN,
  };

  enum ObjColor {
    OBJCOLOR_TRANSPARENT,
    OBJCOLOR_BULLET,
    OBJCOLOR_ROOT_BULLET,
    OBJCOLOR_SUICIDE_BULLET_TARGET_SELF,
    OBJCOLOR_SUICIDE_BULLET_ORIGINAL_DIRECTION,
    OBJCOLOR_EXPLODE,
    OBJCOLOR_SHOT_NORMAL,
    OBJCOLOR_SHOT_FULLPOWER,
    OBJCOLOR_SELF,
    OBJCOLOR_EXPLODE_SELF,
    OBJCOLOR_BONUS,
    END_OF_OBJCOLOR,
  };
  BOOST_STATIC_ASSERT((END_OF_OBJCOLOR * 16) <= 256);

  enum BgColor {
    BGCOLOR_TRANSPARENT,
    BGCOLOR_GRAY,
    BGCOLOR_FONT_WHITE,
    BGCOLOR_FONT_RED,
    BGCOLOR_FONT_GREEN,
    BGCOLOR_HORIZONTAL_LASER,
    BGCOLOR_BOSS_BODY,
    BGCOLOR_BOSS_BODY_DAMAGED,
    BGCOLOR_BOSS_CORE_1,
    BGCOLOR_BOSS_CORE_2,
    BGCOLOR_BOSS_CORE_3,
    BGCOLOR_BOSS_CORE_4,
    BGCOLOR_BOSS_SHIELD,
    END_OF_BGCOLOR,
  };
  BOOST_STATIC_ASSERT((END_OF_BGCOLOR * 16) <= 256);

  enum {
    BGBASEADDR = 0,

    BGMAP_INDEX_BG = 24,

    BGMAP_INDEX_MENU_LOGO = 25,
    BGMAP_INDEX_MENU_TEXT = 26,

    BGMAP_INDEX_GAME_STATUS = 27,
    BGMAP_INDEX_GAME_HORIZONTAL_LASER = 28,
    BGMAP_INDEX_GAME_BOSS = 29,
    BGMAP_INDEX_GAME_BOSS_2 = 30,

    END_OF_BGMAP = 32,
  };

  static void setupSprite(void);
  static void setupTile(void);

  // ------------------------------------------------------------
  static void initializeBGMAP_BG(void);
  static void clearBGMAP(int mapBaseAdr);

  // ------------------------------------------------------------
  static void drawImage(int posx, int posy, int idx, int width, int height, int palette, int bgmapIndex) {
    u16 *bgmap = static_cast<u16 *>(MAP_BASE_ADR(bgmapIndex));
    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        bgmap[(posy + y) * 32 + (posx + x)] = idx | BG_PALETTE(palette);
        ++idx;
      }
    }
  }

  static void drawBGMenuCircle(int x, int y, int palette);
  static void drawBGMenuLeftArrow(int x, int y, int palette);
  static void drawBGMenuRightArrow(int x, int y, int palette);

  static void drawBGStatus(void);
  static void drawBGReplay(void);
  static void drawBGResultBorder(void);
  static void drawBGResultTimeOver(void);
  static void drawBGResultClear(void);
  static void drawBGResultBestScore(void);
  static void drawBGResultPressStart(void);
  static void drawBGResultReplaySaved(void);

  // ------------------------------------------------------------
  template<int _order> static void drawOpacityNumber(int x, int y, int num, int palette) {
    u16 *bg = getBG(x, y, BGMAP_INDEX_GAME_STATUS);
    bg += (_order - 1);
    for (int i = 0; i < _order; ++i) {
      int div = Div(num, 10);
      *bg = (ImageResource::getTileIndex<ImageResource::BG_NUMBER>::value + (num - div * 10)) | BG_PALETTE(palette);
      --bg;
      num = div;
    }
  }

private:
  static u16 *getBG(int x, int y, int bgmapIndex) {
    u16 *bgmap = static_cast<u16 *>(MAP_BASE_ADR(bgmapIndex));
    bgmap += y * 32 + x;
    return bgmap;
  }
};

#endif
