// XXX uniqID XXX 19e22a748dbd8fdfb82d14d4fef2c47c XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "vulkanon/l0_enemy1-left.hpp" 

extern const BulletStepFunc bullet_f970b22888fc597305e4f31cfbd56782_19e22a748dbd8fdfb82d14d4fef2c47c[] = { 
stepfunc_cd9b613920aeeb3ee886cd56989c2608_19e22a748dbd8fdfb82d14d4fef2c47c,
stepfunc_b911c30c1821ab62ff1e91c9e2a18e16_19e22a748dbd8fdfb82d14d4fef2c47c,
stepfunc_b911c30c1821ab62ff1e91c9e2a18e16_19e22a748dbd8fdfb82d14d4fef2c47c,
stepfunc_b911c30c1821ab62ff1e91c9e2a18e16_19e22a748dbd8fdfb82d14d4fef2c47c,
stepfunc_b911c30c1821ab62ff1e91c9e2a18e16_19e22a748dbd8fdfb82d14d4fef2c47c,
stepfunc_b911c30c1821ab62ff1e91c9e2a18e16_19e22a748dbd8fdfb82d14d4fef2c47c,
stepfunc_b911c30c1821ab62ff1e91c9e2a18e16_19e22a748dbd8fdfb82d14d4fef2c47c,
stepfunc_b911c30c1821ab62ff1e91c9e2a18e16_19e22a748dbd8fdfb82d14d4fef2c47c,
stepfunc_b911c30c1821ab62ff1e91c9e2a18e16_19e22a748dbd8fdfb82d14d4fef2c47c,
stepfunc_b911c30c1821ab62ff1e91c9e2a18e16_19e22a748dbd8fdfb82d14d4fef2c47c,
stepfunc_b911c30c1821ab62ff1e91c9e2a18e16_19e22a748dbd8fdfb82d14d4fef2c47c,
stepfunc_b911c30c1821ab62ff1e91c9e2a18e16_19e22a748dbd8fdfb82d14d4fef2c47c,
stepfunc_b911c30c1821ab62ff1e91c9e2a18e16_19e22a748dbd8fdfb82d14d4fef2c47c,
stepfunc_b911c30c1821ab62ff1e91c9e2a18e16_19e22a748dbd8fdfb82d14d4fef2c47c,
stepfunc_b911c30c1821ab62ff1e91c9e2a18e16_19e22a748dbd8fdfb82d14d4fef2c47c,
stepfunc_b911c30c1821ab62ff1e91c9e2a18e16_19e22a748dbd8fdfb82d14d4fef2c47c,
stepfunc_b911c30c1821ab62ff1e91c9e2a18e16_19e22a748dbd8fdfb82d14d4fef2c47c,
stepfunc_b911c30c1821ab62ff1e91c9e2a18e16_19e22a748dbd8fdfb82d14d4fef2c47c,
stepfunc_b911c30c1821ab62ff1e91c9e2a18e16_19e22a748dbd8fdfb82d14d4fef2c47c,
stepfunc_b911c30c1821ab62ff1e91c9e2a18e16_19e22a748dbd8fdfb82d14d4fef2c47c,
stepfunc_b911c30c1821ab62ff1e91c9e2a18e16_19e22a748dbd8fdfb82d14d4fef2c47c,
stepfunc_dae2cf81747ffb5070f05c8837b1d568_19e22a748dbd8fdfb82d14d4fef2c47c,
NULL}; 
void stepfunc_f8065ac21976556042f7f909fa003d88_19e22a748dbd8fdfb82d14d4fef2c47c(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + ((0 * 1.0 * 256 / 360));  p->lastBulletSpeed = p->lastBulletSpeed + (0.2);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + ((2 * 1.0 * 256 / 360));  p->lastBulletSpeed = p->lastBulletSpeed + (0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (-(2 * 1.0 * 256 / 360));  p->lastBulletSpeed = p->lastBulletSpeed + (0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + ((4 * 1.0 * 256 / 360));  p->lastBulletSpeed = p->lastBulletSpeed + (0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (-(4 * 1.0 * 256 / 360));  p->lastBulletSpeed = p->lastBulletSpeed + (0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + ((6 * 1.0 * 256 / 360));  p->lastBulletSpeed = p->lastBulletSpeed + (0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (-(6 * 1.0 * 256 / 360));  p->lastBulletSpeed = p->lastBulletSpeed + (0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + ((8 * 1.0 * 256 / 360));  p->lastBulletSpeed = p->lastBulletSpeed + (0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (-(8 * 1.0 * 256 / 360));  p->lastBulletSpeed = p->lastBulletSpeed + (0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_b911c30c1821ab62ff1e91c9e2a18e16_19e22a748dbd8fdfb82d14d4fef2c47c(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + ((0 * 1.0 * 256 / 360));  p->lastBulletSpeed = (1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 5; ++i) { 
stepfunc_f8065ac21976556042f7f909fa003d88_19e22a748dbd8fdfb82d14d4fef2c47c(p);}
p->wait = static_cast<u16>(60); 
}
void stepfunc_cd9b613920aeeb3ee886cd56989c2608_19e22a748dbd8fdfb82d14d4fef2c47c(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1);  FixedPointNum speed = (256 * -90 / 360) + ((90 * 1.0 * 256 / 360)) - p->getAngle();p->setRound(speed, life);}
{
  u16 life = static_cast<u16>(1);  FixedPointNum speed = 0.5 - p->getSpeed();p->setAccel(speed, life);}
p->wait = static_cast<u16>(30); 
}
void stepfunc_dae2cf81747ffb5070f05c8837b1d568_19e22a748dbd8fdfb82d14d4fef2c47c(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_19e22a748dbd8fdfb82d14d4fef2c47c(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_f970b22888fc597305e4f31cfbd56782_19e22a748dbd8fdfb82d14d4fef2c47c); 
  }
return bi;}


