// XXX uniqID XXX 06bbe9313d42a45857295f64293f5f93 XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "vulkanon/l0_boss2.hpp" 

extern const BulletStepFunc bullet_73cfb880b522d7f0c1a5d91d0c166c50_06bbe9313d42a45857295f64293f5f93[] = { 
stepfunc_45365fa1d225374d0027179aa02044d9_06bbe9313d42a45857295f64293f5f93,
stepfunc_c2db9f05d4f182941e7e9906f14f63c0_06bbe9313d42a45857295f64293f5f93,
stepfunc_b0a4c1453fb6f32de0c898fde337650f_06bbe9313d42a45857295f64293f5f93,
stepfunc_b0a4c1453fb6f32de0c898fde337650f_06bbe9313d42a45857295f64293f5f93,
stepfunc_b0a4c1453fb6f32de0c898fde337650f_06bbe9313d42a45857295f64293f5f93,
stepfunc_b0a4c1453fb6f32de0c898fde337650f_06bbe9313d42a45857295f64293f5f93,
stepfunc_b0a4c1453fb6f32de0c898fde337650f_06bbe9313d42a45857295f64293f5f93,
stepfunc_b0a4c1453fb6f32de0c898fde337650f_06bbe9313d42a45857295f64293f5f93,
stepfunc_b0a4c1453fb6f32de0c898fde337650f_06bbe9313d42a45857295f64293f5f93,
stepfunc_b0a4c1453fb6f32de0c898fde337650f_06bbe9313d42a45857295f64293f5f93,
stepfunc_b0a4c1453fb6f32de0c898fde337650f_06bbe9313d42a45857295f64293f5f93,
stepfunc_b0a4c1453fb6f32de0c898fde337650f_06bbe9313d42a45857295f64293f5f93,
stepfunc_b0a4c1453fb6f32de0c898fde337650f_06bbe9313d42a45857295f64293f5f93,
stepfunc_b0a4c1453fb6f32de0c898fde337650f_06bbe9313d42a45857295f64293f5f93,
stepfunc_b0a4c1453fb6f32de0c898fde337650f_06bbe9313d42a45857295f64293f5f93,
stepfunc_b0a4c1453fb6f32de0c898fde337650f_06bbe9313d42a45857295f64293f5f93,
stepfunc_b0a4c1453fb6f32de0c898fde337650f_06bbe9313d42a45857295f64293f5f93,
stepfunc_b0a4c1453fb6f32de0c898fde337650f_06bbe9313d42a45857295f64293f5f93,
stepfunc_b0a4c1453fb6f32de0c898fde337650f_06bbe9313d42a45857295f64293f5f93,
stepfunc_b0a4c1453fb6f32de0c898fde337650f_06bbe9313d42a45857295f64293f5f93,
stepfunc_b0a4c1453fb6f32de0c898fde337650f_06bbe9313d42a45857295f64293f5f93,
stepfunc_b0a4c1453fb6f32de0c898fde337650f_06bbe9313d42a45857295f64293f5f93,
stepfunc_dae2cf81747ffb5070f05c8837b1d568_06bbe9313d42a45857295f64293f5f93,
NULL}; 
void stepfunc_f8065ac21976556042f7f909fa003d88_06bbe9313d42a45857295f64293f5f93(BulletInfo *p) { 
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
void stepfunc_b0a4c1453fb6f32de0c898fde337650f_06bbe9313d42a45857295f64293f5f93(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + ((0 * 1.0 * 256 / 360));  p->lastBulletSpeed = (1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 5; ++i) { 
stepfunc_f8065ac21976556042f7f909fa003d88_06bbe9313d42a45857295f64293f5f93(p);}
p->wait = static_cast<u16>(60); 
}
void stepfunc_45365fa1d225374d0027179aa02044d9_06bbe9313d42a45857295f64293f5f93(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1);  FixedPointNum speed = (256 * -90 / 360) + ((180 * 1.0 * 256 / 360)) - p->getAngle();p->setRound(speed, life);}
{
  u16 life = static_cast<u16>(1);  FixedPointNum speed = 1 - p->getSpeed();p->setAccel(speed, life);}
p->wait = static_cast<u16>(30); 
}
void stepfunc_c2db9f05d4f182941e7e9906f14f63c0_06bbe9313d42a45857295f64293f5f93(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1);  FixedPointNum speed = 0 - p->getSpeed();p->setAccel(speed, life);}
}
void stepfunc_dae2cf81747ffb5070f05c8837b1d568_06bbe9313d42a45857295f64293f5f93(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_06bbe9313d42a45857295f64293f5f93(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_73cfb880b522d7f0c1a5d91d0c166c50_06bbe9313d42a45857295f64293f5f93); 
  }
return bi;}


