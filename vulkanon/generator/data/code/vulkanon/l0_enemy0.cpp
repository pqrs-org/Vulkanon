// XXX uniqID XXX 2efa80d88730bc60d4dd12b0afe3afde XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "vulkanon/l0_enemy0.hpp" 

extern const BulletStepFunc bullet_c3e2819990d803b10757f5df356edcf5_2efa80d88730bc60d4dd12b0afe3afde[] = { 
stepfunc_1c34f3a349a116f9c1a61f9c6aa70d1f_2efa80d88730bc60d4dd12b0afe3afde,
stepfunc_6ba9703189746a284b35c2be3b6f8005_2efa80d88730bc60d4dd12b0afe3afde,
stepfunc_6ba9703189746a284b35c2be3b6f8005_2efa80d88730bc60d4dd12b0afe3afde,
stepfunc_6ba9703189746a284b35c2be3b6f8005_2efa80d88730bc60d4dd12b0afe3afde,
stepfunc_6ba9703189746a284b35c2be3b6f8005_2efa80d88730bc60d4dd12b0afe3afde,
stepfunc_6ba9703189746a284b35c2be3b6f8005_2efa80d88730bc60d4dd12b0afe3afde,
stepfunc_8785d7fc4f68e1ab9eb27bb389443b4c_2efa80d88730bc60d4dd12b0afe3afde,
NULL}; 
void stepfunc_806a74f15dce97098f25ed860946a548_2efa80d88730bc60d4dd12b0afe3afde(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + ((18 * 1.0 * 256 / 360));  p->lastBulletSpeed = (2);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_6ba9703189746a284b35c2be3b6f8005_2efa80d88730bc60d4dd12b0afe3afde(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1);  FixedPointNum speed = SelfPos::getAngle(p) + ((0 * 1.0 * 256 / 360)) - p->getAngle();p->setRound(speed, life);}
p->wait = static_cast<u16>(10); 
}
void stepfunc_1c34f3a349a116f9c1a61f9c6aa70d1f_2efa80d88730bc60d4dd12b0afe3afde(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1);  FixedPointNum speed = (256 * -90 / 360) + ((180 * 1.0 * 256 / 360)) - p->getAngle();p->setRound(speed, life);}
{
  u16 life = static_cast<u16>(1);  FixedPointNum speed = 1 - p->getSpeed();p->setAccel(speed, life);}
p->wait = static_cast<u16>(20); 
}
void stepfunc_8785d7fc4f68e1ab9eb27bb389443b4c_2efa80d88730bc60d4dd12b0afe3afde(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + ((0 * 1.0 * 256 / 360));  p->lastBulletSpeed = (2);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 19; ++i) { 
stepfunc_806a74f15dce97098f25ed860946a548_2efa80d88730bc60d4dd12b0afe3afde(p);}
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_2efa80d88730bc60d4dd12b0afe3afde(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_c3e2819990d803b10757f5df356edcf5_2efa80d88730bc60d4dd12b0afe3afde); 
  }
return bi;}


