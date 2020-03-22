// XXX uniqID XXX d04a564664a6c54b8eb787ed27fb12b0 XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "vulkanon/l0_enemy1-right.hpp" 

extern const BulletStepFunc bullet_248386582a2570e9025f45307b0d5099_d04a564664a6c54b8eb787ed27fb12b0[] = { 
stepfunc_3e03ce4b4b83dad477f349db9b3c57ad_d04a564664a6c54b8eb787ed27fb12b0,
stepfunc_0b075a9fcd80156dfb487fc07d89f169_d04a564664a6c54b8eb787ed27fb12b0,
stepfunc_0b075a9fcd80156dfb487fc07d89f169_d04a564664a6c54b8eb787ed27fb12b0,
stepfunc_0b075a9fcd80156dfb487fc07d89f169_d04a564664a6c54b8eb787ed27fb12b0,
stepfunc_0b075a9fcd80156dfb487fc07d89f169_d04a564664a6c54b8eb787ed27fb12b0,
stepfunc_0b075a9fcd80156dfb487fc07d89f169_d04a564664a6c54b8eb787ed27fb12b0,
stepfunc_0b075a9fcd80156dfb487fc07d89f169_d04a564664a6c54b8eb787ed27fb12b0,
stepfunc_0b075a9fcd80156dfb487fc07d89f169_d04a564664a6c54b8eb787ed27fb12b0,
stepfunc_0b075a9fcd80156dfb487fc07d89f169_d04a564664a6c54b8eb787ed27fb12b0,
stepfunc_0b075a9fcd80156dfb487fc07d89f169_d04a564664a6c54b8eb787ed27fb12b0,
stepfunc_0b075a9fcd80156dfb487fc07d89f169_d04a564664a6c54b8eb787ed27fb12b0,
stepfunc_0b075a9fcd80156dfb487fc07d89f169_d04a564664a6c54b8eb787ed27fb12b0,
stepfunc_0b075a9fcd80156dfb487fc07d89f169_d04a564664a6c54b8eb787ed27fb12b0,
stepfunc_0b075a9fcd80156dfb487fc07d89f169_d04a564664a6c54b8eb787ed27fb12b0,
stepfunc_0b075a9fcd80156dfb487fc07d89f169_d04a564664a6c54b8eb787ed27fb12b0,
stepfunc_0b075a9fcd80156dfb487fc07d89f169_d04a564664a6c54b8eb787ed27fb12b0,
stepfunc_0b075a9fcd80156dfb487fc07d89f169_d04a564664a6c54b8eb787ed27fb12b0,
stepfunc_0b075a9fcd80156dfb487fc07d89f169_d04a564664a6c54b8eb787ed27fb12b0,
stepfunc_0b075a9fcd80156dfb487fc07d89f169_d04a564664a6c54b8eb787ed27fb12b0,
stepfunc_0b075a9fcd80156dfb487fc07d89f169_d04a564664a6c54b8eb787ed27fb12b0,
stepfunc_0b075a9fcd80156dfb487fc07d89f169_d04a564664a6c54b8eb787ed27fb12b0,
stepfunc_dae2cf81747ffb5070f05c8837b1d568_d04a564664a6c54b8eb787ed27fb12b0,
NULL}; 
void stepfunc_f8065ac21976556042f7f909fa003d88_d04a564664a6c54b8eb787ed27fb12b0(BulletInfo *p) { 
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
void stepfunc_0b075a9fcd80156dfb487fc07d89f169_d04a564664a6c54b8eb787ed27fb12b0(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + ((0 * 1.0 * 256 / 360));  p->lastBulletSpeed = (1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 5; ++i) { 
stepfunc_f8065ac21976556042f7f909fa003d88_d04a564664a6c54b8eb787ed27fb12b0(p);}
p->wait = static_cast<u16>(60); 
}
void stepfunc_3e03ce4b4b83dad477f349db9b3c57ad_d04a564664a6c54b8eb787ed27fb12b0(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1);  FixedPointNum speed = (256 * -90 / 360) + ((270 * 1.0 * 256 / 360)) - p->getAngle();p->setRound(speed, life);}
{
  u16 life = static_cast<u16>(1);  FixedPointNum speed = 0.5 - p->getSpeed();p->setAccel(speed, life);}
p->wait = static_cast<u16>(30); 
}
void stepfunc_dae2cf81747ffb5070f05c8837b1d568_d04a564664a6c54b8eb787ed27fb12b0(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_d04a564664a6c54b8eb787ed27fb12b0(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_248386582a2570e9025f45307b0d5099_d04a564664a6c54b8eb787ed27fb12b0); 
  }
return bi;}


