#ifndef GAMEENGINE_HPP
#define GAMEENGINE_HPP

#include "gameparams.hpp"

#include "barrageinfo.hpp"
#include "bullet.hpp"
#include "imagehandler.hpp"
#include "soundhandler.hpp"
#include "spritedoubler.hpp"
#include "main.hpp"

#include "libgbakey.hpp"
#include "libplaytime.hpp"
#include "libkeylog.hpp"
#include "stepfunc.hpp"
#include "bosscore.hpp"
#include "bossbody.hpp"
#include "effect.hpp"
#include "replay.hpp"
#include "menu_title.hpp"
#include "menu_replaylist.hpp"
#include "menu_credits.hpp"
#include "shot.hpp"

class GameEngine {
public:
  static void doMainMenu(void);
  static int getScore(void) { return score; }
  static const PlayTime &getPlayTime(void) { return playTime; }

private:
  // ------------------------------------------------------------
  static void drawBulletsNum(void) {
    ImageHandler::drawOpacityNumber<3>(5, 1,
                                       ListBullets::MAXNUM - ListBullets::freeInfoStack.getSize(),
                                       ImageHandler::BGCOLOR_FONT_WHITE);
  }

  static void drawScore(void) {
    ImageHandler::drawOpacityNumber<5>(13, 0, score, ImageHandler::BGCOLOR_FONT_WHITE);
    ImageHandler::drawOpacityNumber<1>(19, 0, Self::getMissCount(), ImageHandler::BGCOLOR_FONT_WHITE);
  }

  static void drawPlayTime(void) {
    ImageHandler::drawOpacityNumber<1>(23, 0, playTime.getMin(), ImageHandler::BGCOLOR_FONT_WHITE);
    ImageHandler::drawOpacityNumber<2>(25, 0, playTime.getSec(), ImageHandler::BGCOLOR_FONT_WHITE);
    ImageHandler::drawOpacityNumber<2>(28, 0, playTime.getMilliSec(), ImageHandler::BGCOLOR_FONT_WHITE);
  }

  static void drawFrameDropCount() {
    // draw frameSkip for debug
    ImageHandler::drawOpacityNumber<3>(0, 1, SpriteDoubler::getFrameSkipCount(), ImageHandler::BGCOLOR_FONT_WHITE);
  }

  static void drawBullet(SpriteDoubler::CompiledObjattr *p, BulletInfo *bi, int listShotMinPosX, int listShotMaxPosX) {
    switch (bi->getType()) {
      case BULLET_TYPE_NORMAL:
        p->registObjAttr(bi->getPosY().toInt(), bi->getPosX().toInt(), OBJ_PALETTE(ImageHandler::OBJCOLOR_BULLET) |
                         OBJ_PRIORITY(GameParams::OBJ_PRIORITY_SPRITE) |
                         (ImageResource::getTileIndex<ImageResource::SPR_BULLET>::value + bi->getAnglePattern()));
        Self::hitCheck(bi);
        shotHitCheck<BULLET_TYPE_NORMAL>(bi, listShotMinPosX, listShotMaxPosX);
        break;

      case BULLET_TYPE_SUICIDE_ORIGINAL_DIRECTION_BULLET:
        p->registObjAttr(bi->getPosY().toInt(), bi->getPosX().toInt(),
                         OBJ_PALETTE(ImageHandler::OBJCOLOR_SUICIDE_BULLET_ORIGINAL_DIRECTION) |
                         OBJ_PRIORITY(GameParams::OBJ_PRIORITY_SPRITE) |
                         ImageResource::getTileIndex<ImageResource::SPR_SUICIDE_BULLET>::value + bi->getAnglePattern());
        Self::hitCheck(bi);
        break;

      case BULLET_TYPE_SUICIDE_TARGET_SELF_BULLET:
        p->registObjAttr(bi->getPosY().toInt(), bi->getPosX().toInt(), OBJ_PALETTE(ImageHandler::OBJCOLOR_SUICIDE_BULLET_TARGET_SELF) |
                         OBJ_PRIORITY(GameParams::OBJ_PRIORITY_SPRITE) |
                         ImageResource::getTileIndex<ImageResource::SPR_SUICIDE_BULLET>::value + bi->getAnglePattern());
        Self::hitCheck(bi);
        break;

      case BULLET_TYPE_EXPLODE:
        p->registObjAttr(bi->getPosY().toInt(), bi->getPosX().toInt(), OBJ_PALETTE(ImageHandler::OBJCOLOR_EXPLODE) |
                         OBJ_PRIORITY(GameParams::OBJ_PRIORITY_SPRITE) |
                         ImageResource::getTileIndex<ImageResource::SPR_EXPLODE>::value + bi->getCounter());
        bi->succCounter(ImageHandler::OBJTILE_EXPLODE_PATTERN - 1);
        break;

      case BULLET_TYPE_BONUS:
        p->registObjAttr(bi->getPosY().toInt(), bi->getPosX().toInt(), OBJ_PALETTE(ImageHandler::OBJCOLOR_BONUS) |
                         OBJ_PRIORITY(GameParams::OBJ_PRIORITY_SPRITE) |
                         ImageResource::getTileIndex<ImageResource::SPR_BONUS>::value + bi->getCounter());
        bi->succCounter(ImageHandler::OBJTILE_BONUS_PATTERN - 1);
        break;

      case BULLET_TYPE_ROOT:
        p->registObjAttr(bi->getPosY().toInt(), bi->getPosX().toInt(), OBJ_PALETTE(ImageHandler::OBJCOLOR_ROOT_BULLET) |
                         OBJ_PRIORITY(GameParams::OBJ_PRIORITY_SPRITE) |
                         ImageResource::getTileIndex<ImageResource::SPR_ROOT_BULLET>::value + bi->getCounter());
        bi->succCounter(ImageHandler::OBJTILE_ROOT_BULLET_PATTERN - 1);
        shotHitCheck<BULLET_TYPE_ROOT>(bi, listShotMinPosX, listShotMaxPosX);
        isRootBulletExist = true;
        break;

      default:
        break;
    }
  }

  // ------------------------------------------------------------
  static void fireBarrage(void) {
    if (waitAfterGenerate > 0) {
      --waitAfterGenerate;
    } else {
      const BarrageInfo *barrageInfo = getCurrentBullet();

      if (barrageInfo->type == ACTIONTYPE_WAIT) {
        waitAfterGenerate = barrageInfo->num;

      } else if (barrageInfo->type == ACTIONTYPE_BULLET_NORMAL) {
        BulletInfo *bi = (barrageInfo->func)(barrageInfo->x, barrageInfo->y);
        if (bi == NULL) {
          return;
        }
        bi->setLife(barrageInfo->life);

      } else if (barrageInfo->type == ACTIONTYPE_BOSS_ENABLE) {
        bossEnabled = true;
        succListBarrage();
        return;
      }

      getNextBullet();
    }
  }
  static const BarrageInfo *getCurrentBullet(void);
  static const BarrageInfo *getNextBullet(void);
  static void succListBarrage(void) {
    waitAfterGenerate = 0;
    barrageIndex = 0;
    ++listBarrage;
    if (*listBarrage == NULL) {
      listBarrage = listBarrage_base + 0;
    }
  }

  static void bossHitCheck_and_Drop(ShotInfo *s) {
    if (s->getLife() <= 0) {
      listShot.dropShot(s);
    } else {
      int y = s->getPosY();
      if (! GameParams::bossBody.isBossEnabled()) {
        if (y < 0) {
          listShot.dropShot(s);
        }
      } else {
        const int maxY = 32;
        if (y < maxY) {
          const int shotCenter = s->getPosX() + (ImageHandler::OBJPIXEL_WIDTH_SHOT / 2);
          listShot.dropShot(s);

          if (GameParams::bossCore.hitCheck(shotCenter)) {
            soundShotHitFlag = true;
            GameParams::bossBody.setDamageEffect();
          }
        }
      }
    }
  }

  static void rootBulletExplodeEffect(FixedPointNum posX, FixedPointNum posY) {
    int distance = 2;
    BulletInfo *p;

    p = ListBullets::makeNewBullet();
    if (p) {
      p->initialize(BULLET_TYPE_BONUS, posX - distance, posY - distance, 0, 0, StepFunc::effectBonusStepFuncList);
    }
    p = ListBullets::makeNewBullet();
    if (p) {
      p->initialize(BULLET_TYPE_BONUS, posX + distance, posY - distance, 0, 0, StepFunc::effectBonusStepFuncList);
    }
    p = ListBullets::makeNewBullet();
    if (p) {
      p->initialize(BULLET_TYPE_BONUS, posX - distance, posY + distance, 0, 0, StepFunc::effectBonusStepFuncList);
    }
    p = ListBullets::makeNewBullet();
    if (p) {
      p->initialize(BULLET_TYPE_BONUS, posX + distance, posY + distance, 0, 0, StepFunc::effectBonusStepFuncList);
    }
  }

  template <int BULLETTYPE>
  static void shotHitCheck(BulletInfo *bi, int minX, int maxX) {
    const int x = bi->getPosX().toInt();

    if ((minX > x) | (maxX < x)) {
      return;
    }

    const int y = bi->getPosY().toInt();

    for (int i = 0; i < GameParams::MAX_SHOT; ++i) {
      ShotInfo *s = listShot.getShot(i);
      if (! listShot.isEnable(i)) {
        continue;
      }
      const int maxX = s->getPosX() + ImageHandler::OBJPIXEL_WIDTH_SHOT;
      const int minX = s->getPosX() - ImageHandler::OBJPIXEL_WIDTH_BULLET;

      const int maxY = s->getPosY() + ImageHandler::OBJPIXEL_HEIGHT_SHOT;
      const int minY = s->getPosY() - ImageHandler::OBJPIXEL_HEIGHT_BULLET;

      if ((static_cast<u32>(x - minX) < static_cast<u32>(maxX - minX)) &
          (static_cast<u32>(y - minY) < static_cast<u32>(maxY - minY))) {

        if (BULLETTYPE == BULLET_TYPE_NORMAL) {
          s->decreaseLife(1);
          score += 1;

          ++suicideBulletCounter;
          if (suicideBulletCounter & 0x3) {
            bi->stepFuncList = StepFunc::explodeWithOriginalDirectionStepFuncList;
          } else {
            bi->stepFuncList = StepFunc::explodeWithTargetSelfStepFuncList;
          };
          bi->wait = 0;
          GameParams::horizontalLaser.succ();
        }

        if (BULLETTYPE == BULLET_TYPE_ROOT) {
          s->decreaseLife(ShotInfo::SHOT_LIFE);
          score += 2;

          bi->decreaseLife();
          if (bi->getLife() == 0) {
            score += 100;
            bi->stepFuncList = StepFunc::effectBonusStepFuncList;
            rootBulletExplodeEffect(bi->getPosX(), bi->getPosY());
            bi->wait = 0;
            soundExplodeBossShieldFlag = true;
          } else {
            BulletInfo *p = ListBullets::makeNewBullet();
            if (p) {
              p->initialize(BULLET_TYPE_EXPLODE, bi->getPosX(), bi->getPosY(), 0, 0, StepFunc::effectHitStepFuncList);
            }
          }
        }


        soundShotHitFlag = true;

        return;
      }
    }
  }

  static void playSE(void) {
    if (Self::isMissJustNow()) {
      SoundHandler::playSE(SoundResource::SE_EXPLODE_SELF);
      return;
    }

    if (SoundHandler::getSEIndex() == SoundResource::SE_EXPLODE_SELF) {
      return;
    }

    if (soundLaserFlag) {
      SoundHandler::playSE(SoundResource::SE_LASER);
      return;
    }

    if (SoundHandler::getSEIndex() == SoundResource::SE_LASER) {
      return;
    }

    if (soundExplodeBossShieldFlag) {
      SoundHandler::playSE(SoundResource::SE_EXPLODE_BOSS_SHIELD);
      return;
    }

    if (SoundHandler::isSEPlaying()) {
      return;
    }

    if (soundShotHitFlag) {
      SoundHandler::playSE(SoundResource::SE_SHOT_HIT);
      return;
    }
  }

  static void laserHitCheck(void);
  static void drawBulletsAndHitCheck(int listShotMinPosX, int listShotMaxPosX);
  static void bossShieldDestroyed(void);

  // ------------------------------------------------------------
  static void loop_initialize(void);
  static void doLoop(void);
  static void loop_terminate(void);
  static void showBossDestroy(void);
  static void showResult(void);

  static void irq_vblank(void) {
    // bg scroll
    static int bgoffset = 0;
    bgoffset = (bgoffset + 2) & 0xf;
    BG3VOFS = 8 - (bgoffset / 2);

    SpriteDoubler::irq_vblank();
    SoundHandler::irq_vblank();
  }

  // --------------------------------------------------
  static PlayTime playTime;
  static int score;
  static bool isExitLoop;
  static ListShot listShot;

  static int suicideBulletCounter;
  static int barrageIndex;
  static int waitAfterGenerate;
  static bool isRootBulletExist;
  static bool bossEnabled;
  static const BarrageInfo * const *listBarrage;
  static const BarrageInfo * const *listBarrage_base;

  static Replay replay;
  static bool isViewReplay;

  static MenuTitle menuTitle;
  static MenuReplayList menuReplayList;
  static MenuCredits menuCredits;

  static bool soundShotHitFlag;
  static bool soundLaserFlag;
  static bool soundExplodeBossShieldFlag;
};

#endif
