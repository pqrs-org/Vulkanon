#include <gba_video.h>
#include <gba_interrupt.h>
#include <gba_systemcalls.h>
#include <gba_input.h>
#include <gba_sprites.h>

#include "common.hpp"
#include "gameengine.hpp"
#include "spritedoubler.hpp"
#include "bullet.hpp"
#include "fixed.hpp"
#include "self.hpp"

#include "barragelist.hpp"

PlayTime GameEngine::playTime;
int GameEngine::score;
bool GameEngine::isExitLoop;
ListShot GameEngine::listShot;

int GameEngine::suicideBulletCounter;
int GameEngine::barrageIndex;
int GameEngine::waitAfterGenerate;
bool GameEngine::isRootBulletExist;
bool GameEngine::bossEnabled;
const BarrageInfo * const *GameEngine::listBarrage;
const BarrageInfo * const *GameEngine::listBarrage_base;

EWRAM_DATA Replay GameEngine::replay;
bool GameEngine::isViewReplay;

EWRAM_DATA MenuTitle GameEngine::menuTitle;
EWRAM_DATA MenuReplayList GameEngine::menuReplayList;
EWRAM_DATA MenuCredits GameEngine::menuCredits;

bool GameEngine::soundShotHitFlag;
bool GameEngine::soundLaserFlag;
bool GameEngine::soundExplodeBossShieldFlag;

void
GameEngine::loop_initialize(void)
{
  // GBAKey reset for KeyLog
  GBAKey::initialize();

  Common::initializeSprites();
  SpriteDoubler::initialize();

  ListBullets::initialize();

  SelfPos::setPos(120 - ImageHandler::OBJPIXEL_WIDTH_SELF / 2,
                  120 - ImageHandler::OBJPIXEL_HEIGHT_SELF / 2);

  ImageHandler::clearBGMAP(ImageHandler::BGMAP_INDEX_GAME_STATUS);
  ImageHandler::clearBGMAP(ImageHandler::BGMAP_INDEX_GAME_HORIZONTAL_LASER);
  ImageHandler::clearBGMAP(ImageHandler::BGMAP_INDEX_GAME_BOSS);
  ImageHandler::clearBGMAP(ImageHandler::BGMAP_INDEX_GAME_BOSS_2);
  ImageHandler::drawBGStatus();
  if (isViewReplay) {
    ImageHandler::drawBGReplay();
  }

  Self::initialize();
  GameParams::bossBody.initialize();
  GameParams::bossCore.initialize();
  GameParams::horizontalLaser.initialize();

  playTime.initialize();
  score = 0;
  listShot.initialize();

  suicideBulletCounter = 0;
  barrageIndex = 0;
  waitAfterGenerate = 0;
  isRootBulletExist = false;
  bossEnabled = false;
  listBarrage = listBarrage_base;

  // ------------------------------------------------------------
  SetMode(MODE_0 | BG0_ON | BG1_ON | BG2_ON | BG3_ON | OBJ_ENABLE | OBJ_1D_MAP | BIT(5));
  // status image
  REG_BG0CNT = BG_SIZE_0 | BG_PRIORITY(0) | BG_16_COLOR |
    CHAR_BASE(ImageHandler::BGBASEADDR) | SCREEN_BASE(ImageHandler::BGMAP_INDEX_GAME_STATUS);
  // horizontal laser
  REG_BG1CNT = BG_SIZE_0 | BG_PRIORITY(0) | BG_16_COLOR |
    CHAR_BASE(ImageHandler::BGBASEADDR) | SCREEN_BASE(ImageHandler::BGMAP_INDEX_GAME_HORIZONTAL_LASER);
  // boss
  REG_BG2CNT = BG_SIZE_1 | BG_PRIORITY(3) | BG_16_COLOR |
    CHAR_BASE(ImageHandler::BGBASEADDR) | SCREEN_BASE(ImageHandler::BGMAP_INDEX_GAME_BOSS);
  // background image
  REG_BG3CNT = BG_SIZE_0 | BG_PRIORITY(3) | BG_16_COLOR |
    CHAR_BASE(ImageHandler::BGBASEADDR) | SCREEN_BASE(ImageHandler::BGMAP_INDEX_BG);

  BG0HOFS = 0;
  BG1HOFS = 0;
  BG2HOFS = 0;
  BG3HOFS = 0;

  BG0VOFS = 0;
  BG1VOFS = 0;
  BG2VOFS = 0;
  BG3VOFS = 0;

  SetInterrupt(IE_VBL, irq_vblank);
  SetInterrupt(IE_VCNT, SpriteDoubler::irq_vcount);

  REG_DISPSTAT = (REG_DISPSTAT & 0xff) | VCOUNT(Common::SCREEN_SIZE_Y);

  EnableInterrupt(IE_VBL);
  EnableInterrupt(IE_VCNT);
}

void
GameEngine::loop_terminate()
{
  DisableInterrupt(IE_VCNT);
  DisableInterrupt(IE_VBL);
}

void
GameEngine::doLoop()
{
  loop_initialize();
  SoundHandler::playMusic(SoundResource::MUSIC_GAME);
  SoundHandler::stopSE();

  isExitLoop = false;
  VBlankIntrWait();
  SpriteDoubler::resetFrameSkipCount();

  bool gameCanceled = false;

  for (;;) {
    // ------------------------------------------------------------
    isRootBulletExist = false;
    soundShotHitFlag = false;
    soundLaserFlag = false;
    soundExplodeBossShieldFlag = false;

    u16 pressKeyBit = GBAKey::getPressKeyBit_REG_KEYINPUT();
    u16 keysDown;
    u16 keysHeld;

    if (isViewReplay) {
      u16 replayKeyBit = replay.keyLog.shift();
      GBAKey::scanKeys(replayKeyBit);

      keysDown = GBAKey::getKeysDown();
      keysHeld = GBAKey::getKeysHeld();

      if ((pressKeyBit & (KEY_START | KEY_SELECT | KEY_B)) != 0) {
        isExitLoop = true;
        gameCanceled = true;
      }
    } else {
      replay.keyLog.push(pressKeyBit);
      GBAKey::scanKeys(pressKeyBit);

      keysDown = GBAKey::getKeysDown();
      keysHeld = GBAKey::getKeysHeld();

      if ((keysDown & KEY_SELECT) != 0) {
        isExitLoop = true;
        gameCanceled = true;
      }
    }

    Self::step(keysHeld);

    if (keysDown & (KEY_R | KEY_L)) {
      soundLaserFlag = GameParams::horizontalLaser.fire();
    }

    listShot.setAutoFireFlag(false);
    if ((keysDown | keysHeld) & (KEY_A | KEY_B)) {
      if (! Self::isNoFireTime()) {
        listShot.setAutoFireFlag(true);
      }
    }

    // ------------------------------------------------------------
    isExitLoop |= (! GameParams::bossCore.isAlive());
    if (GameParams::bossBody.isBossEnabled() & (SelfPos::posy.toInt() < 32)) {
      Self::miss();
    }

    ListBullets::doStep();

    int listShotMinPosX;
    int listShotMaxPosX;
    listShot.step(&listShotMinPosX, &listShotMaxPosX);
    listShotMinPosX -= ImageHandler::OBJPIXEL_WIDTH_BULLET;
    listShotMaxPosX += ImageHandler::OBJPIXEL_WIDTH_SHOT;

    drawBulletsAndHitCheck(listShotMinPosX, listShotMaxPosX);
    fireBarrage();

    if (bossEnabled) {
      GameParams::bossBody.step();
    }

    GameParams::horizontalLaser.step();
    if (GameParams::horizontalLaser.isFire()) {
      laserHitCheck();
    }

    // time count
    if (playTime.getMin() >= 3) {
      isExitLoop = true;
    } else {
      playTime.succFrame();
    }

    // adjust waitAfterGenerate
    if ((! isRootBulletExist) & (waitAfterGenerate > 60)) {
      waitAfterGenerate = 60;
    }

    drawPlayTime();
    drawScore();
#if 0
    drawBulletsNum();
    drawFrameDropCount();
#endif

    SpriteDoubler::setCompileDone();

    // ----------------------------------------
    playSE();

    VBlankIntrWait();

    if (isExitLoop) {
      break;
    }
  }

  loop_terminate();
  if (! gameCanceled) {
    if (! GameParams::bossCore.isAlive()) {
      showBossDestroy();
    }
    showResult();
  }
}

void
GameEngine::laserHitCheck(void)
{
  for (BulletInfo *bi = ListBullets::getFirstItem(); bi != NULL; bi = ListBullets::iterator(bi)) {
    const int type = BULLET_TYPE_NORMAL |
      BULLET_TYPE_HIDDEN |
      BULLET_TYPE_SUICIDE_TARGET_SELF_BULLET |
      BULLET_TYPE_SUICIDE_ORIGINAL_DIRECTION_BULLET;

    if (((bi->getType() & type) != 0) &
        (static_cast<u32>(bi->getPosY().toInt() - GameParams::horizontalLaser.getPosY()) < 8)) {
      if (bi->getType() & (BULLET_TYPE_HIDDEN |
                           BULLET_TYPE_SUICIDE_TARGET_SELF_BULLET |
                           BULLET_TYPE_SUICIDE_ORIGINAL_DIRECTION_BULLET)) {
        bi->stepFuncList = StepFunc::effectBonusStepFuncList;
        score += 4;
      } else {
        bi->stepFuncList = StepFunc::explodeWithTargetSelfStepFuncList;
        score += 1;
      }
      bi->wait = 0;
    }
  }
}

void
GameEngine::drawBulletsAndHitCheck(int listShotMinPosX, int listShotMaxPosX)
{
  SpriteDoubler::CompiledObjattr *p = SpriteDoubler::getIncurrentCompiledObjattr();
  p->initializePerFrame();

  for (BulletInfo *bi = ListBullets::getFirstItem(); bi != NULL; bi = ListBullets::iterator(bi)) {
    if (bi->getType() == BULLET_TYPE_HIDDEN) {
      continue;
    }
    p->registItemNumInBlock(bi->getPosY().toInt());
  }
  p->normalizeItemNumInBlock();
  p->makeObjAttrStartPosInBlock();

  // ------------------------------------------------------------
  for (BulletInfo *bi = ListBullets::getFirstItem(); bi != NULL; bi = ListBullets::iterator(bi)) {
    drawBullet(p, bi, listShotMinPosX, listShotMaxPosX);
  }
  p->calcIRQInfo();

  // store shieldNum before bossCore.hitCheck.
  int shieldNum = GameParams::bossCore.getShieldNum();

  for (int i = 0; i < GameParams::MAX_SHOT; ++i) {
    if (! listShot.isEnable(i)) {
      continue;
    }

    ShotInfo *s = listShot.getShot(i);
    bossHitCheck_and_Drop(s);
  }

  if (shieldNum != GameParams::bossCore.getShieldNum()) {
    bossShieldDestroyed();
  }
}

void
GameEngine::bossShieldDestroyed(void)
{
  int waitTime = 0;
  for (BulletInfo *bi = ListBullets::getFirstItem(); bi != NULL; bi = ListBullets::iterator(bi)) {
    bi->stepFuncList = StepFunc::effectHitStepFuncList;
    bi->wait = (waitTime & 0x3);
    ++waitTime;
    score += 1;
  }
  score += 10000;
  GameParams::bossBody.setVibrateEffect();
  succListBarrage();

  soundExplodeBossShieldFlag = true;
}


const BarrageInfo *
GameEngine::getCurrentBullet(void)
{
  return *listBarrage + barrageIndex;
}

const BarrageInfo *
GameEngine::getNextBullet(void)
{
  ++barrageIndex;
  if ((*listBarrage)[barrageIndex].type == END_OF_ACTIONTYPE) {
    barrageIndex = 0;
  }
  return getCurrentBullet();
}


void
GameEngine::showBossDestroy()
{
  score += 20000;

  BG0HOFS = 0;
  BG1HOFS = 0;
  BG2HOFS = 0;
  BG3HOFS = 0;

  BG0VOFS = 0;
  BG1VOFS = 0;
  BG2VOFS = 0;
  BG3VOFS = 0;

  SetInterrupt(IE_VBL, SoundHandler::irq_vblank);
  EnableInterrupt(IE_VBL);

  SoundHandler::playSE(SoundResource::SE_BOSS_DESTROY_VIBRATION);

  // --------------------------------------------------
  // vibration
  Common::initializeSprites();
  drawPlayTime();
  drawScore();

  for (int i = 0; i < 2; ++i) {
    GameParams::bossBody.setVibrateEffect();
    while (GameParams::bossBody.isVibrateEffect()) {
      GBAKey::scanKeys();
      u16 keysHeld = GBAKey::getKeysHeld();
      Self::step(keysHeld);
      GameParams::bossBody.step();
      VBlankIntrWait();
    }
  }

  // --------------------------------------------------
  // explode
  SoundHandler::playSE(SoundResource::SE_BOSS_DESTROY_EXPLODE);

  ImageHandler::clearBGMAP(ImageHandler::BGMAP_INDEX_GAME_BOSS);
  GameParams::bossBody.step();
  GameParams::EffectExplode explode;
  explode.initialize();
  explode.setup(GameParams::bossCore.getCenterPosX() - explode.getWidth() / 2,
                GameParams::bossCore.getCenterPosY() - explode.getHeight() / 2);
  while (explode.isAlive()) {
    GBAKey::scanKeys();
    u16 keysHeld = GBAKey::getKeysHeld();
    Self::step(keysHeld);
    explode.step();
    VBlankIntrWait();
  }

  DisableInterrupt(IE_VBL);
}

void
GameEngine::showResult()
{
  Replay::ReplayType type = Replay::REPLAY_TYPE_NONE;
  if (! isViewReplay) {
    type = replay.saveToSRAM();
  }

  SetInterrupt(IE_VBL, SoundHandler::irq_vblank);
  EnableInterrupt(IE_VBL);

  SoundHandler::stopMusic();

  // --------------------------------------------------
  ImageHandler::drawBGResultBorder();
  ImageHandler::drawBGResultPressStart();

  if (type == Replay::REPLAY_TYPE_NONE) {
    if (GameParams::bossCore.isAlive()) {
      ImageHandler::drawBGResultTimeOver();
    } else {
      ImageHandler::drawBGResultClear();
    }
  } else if (Replay::getReplayTypeMode(type) == Replay::REPLAY_TYPE_MODE_BESTSCORE) {
    ImageHandler::drawBGResultBestScore();
    ImageHandler::drawBGResultReplaySaved();
  }

  int soundWait = 60;
  for (;;) {
    GBAKey::scanKeys();

    u16 keysDown = GBAKey::getKeysDown();
    if (keysDown & (KEY_START | KEY_SELECT)) {
      break;
    }

    if (soundWait > 0) {
      --soundWait;
      if (soundWait == 0) {
        SoundHandler::playMusic(SoundResource::MUSIC_RESULT);
      }
    }

    VBlankIntrWait();
  }

  DisableInterrupt(IE_VBL);
}


void
GameEngine::doMainMenu(void)
{
  menuTitle.resetPos();

  for (;;) {
    menuTitle.doLoop();

    switch (menuTitle.getGameMode()) {
      case MenuTitle::GAMEMODE_PLAY_LEVEL0:
      case MenuTitle::GAMEMODE_PLAY_LEVEL1:
      case MenuTitle::GAMEMODE_PLAY_LEVEL2:
      case MenuTitle::GAMEMODE_PLAY_LEVEL3:
        isViewReplay = false;

        if (menuTitle.getGameMode() == MenuTitle::GAMEMODE_PLAY_LEVEL0) {
          listBarrage_base = listBarrage_L0_all;
          replay.initializeToSave(Replay::REPLAY_TYPE_LEVEL_0);
        } else if (menuTitle.getGameMode() == MenuTitle::GAMEMODE_PLAY_LEVEL1) {
          listBarrage_base = listBarrage_L1_all;
          replay.initializeToSave(Replay::REPLAY_TYPE_LEVEL_1);
        } else if (menuTitle.getGameMode() == MenuTitle::GAMEMODE_PLAY_LEVEL2) {
          listBarrage_base = listBarrage_L2_all;
          replay.initializeToSave(Replay::REPLAY_TYPE_LEVEL_2);
        } else {
          listBarrage_base = listBarrage_L3_all;
          replay.initializeToSave(Replay::REPLAY_TYPE_LEVEL_3);
        }

        doLoop();
        break;

      case MenuTitle::GAMEMODE_VIEW_REPLAY:
        menuReplayList.resetPos();

        for (;;) {
          if (! menuReplayList.doLoop()) {
            break;
          }

          isViewReplay = true;

          const MenuReplayList::Line *p = menuReplayList.getSelectedLine();
          SRAMFileSystem::FilePtr ptr;
          if (p->isDemoPlay) {
            Replay::getSavedReplay(&ptr, MainInfo::sramFS_DemoPlayData, (p->replayHeader).getType());
          } else {
            Replay::getSavedReplay(&ptr, MainInfo::sramFS_SRAM, (p->replayHeader).getType());
          }
          replay.loadFromSRAM(&ptr);

          Replay::ReplayTypeLevel level = Replay::getReplayTypeLevel(p->replayHeader.getType());
          if (level == Replay::REPLAY_TYPE_LEVEL_0) {
            listBarrage_base = listBarrage_L0_all;
          } else if (level == Replay::REPLAY_TYPE_LEVEL_1) {
            listBarrage_base = listBarrage_L1_all;
          } else if (level == Replay::REPLAY_TYPE_LEVEL_2) {
            listBarrage_base = listBarrage_L2_all;
          } else {
            listBarrage_base = listBarrage_L3_all;
          }

          doLoop();
        }
        break;

      case MenuTitle::GAMEMODE_CREDITS:
        menuCredits.doLoop();
        break;

      default:
        break;
    }
  }
}
