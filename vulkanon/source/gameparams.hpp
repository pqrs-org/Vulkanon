#ifndef GAMEPARAMS_HPP
#define GAMEPARAMS_HPP

#include "imagehandler.hpp"
#include "effect.hpp"
#include "bossbody.hpp"
#include "bosscore.hpp"
#include "horizontal_laser.hpp"

class GameParams
{
public:
  enum Params {
    MAX_SHOT = 4,

    // Node: setting OAM_INDEX by OBJ_PRIORITY
    OAM_INDEX_SELF = 0,
    // not used OAM[1]
    // assign for bullet OAM[2] - OAM[121]
    OAM_INDEX_EXPLODE = 122,
    // OAM[123] is not use.
    OAM_INDEX_SHOT = 124,
    // assign for shot OAM[124] - OAM[127]. (depend MAX_SHOT)

    OBJ_PRIORITY_SPRITE = 2,

    BOSS_CORE_POSX = ((Common::SCREEN_SIZE_X / 8) / 2) - TILEINFO_bg_boss_core_1::w / 2,

    EXPLODE_EFFECT_FRAMES_PER_PATTERN = 2, // must be 2^x

    DEFAULT_BULLET_POSX = 120 - ImageHandler::OBJPIXEL_WIDTH_BULLET / 2,
    DEFAULT_BULLET_POSY = 20 - ImageHandler::OBJPIXEL_HEIGHT_BULLET / 2,
  };

  typedef Effect<OAM_INDEX_SELF,
                 OBJ_PRIORITY_SPRITE,
                 ImageHandler::OBJCOLOR_EXPLODE_SELF,
                 OBJ_SHAPE(WIDE), OBJ_SIZE(Sprite_32x16),
                 ImageHandler::OBJPIXEL_WIDTH_EXPLODE_SELF,
                 ImageHandler::OBJPIXEL_HEIGHT_EXPLODE_SELF,
                 ImageResource::getTileIndex<ImageResource::SPR_EXPLODE_SELF>::value,
                 TILEINFO_spr_explode_self::size / ImageHandler::OBJTILE_EXPLODE_SELF_PATTERN,
                 ImageHandler::OBJTILE_EXPLODE_SELF_PATTERN,
                 EXPLODE_EFFECT_FRAMES_PER_PATTERN> EffectExplode;

  static BossCore<BOSS_CORE_POSX, 2, ImageHandler::BGMAP_INDEX_GAME_BOSS> bossCore;
  static BossBody<ImageHandler::BGMAP_INDEX_GAME_BOSS> bossBody;
  static HorizontalLaser<ImageHandler::BGMAP_INDEX_GAME_HORIZONTAL_LASER> horizontalLaser;
};

#endif
