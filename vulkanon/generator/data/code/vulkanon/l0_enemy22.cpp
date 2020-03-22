// XXX uniqID XXX 09bfd4e879c0988929257729c81f9c4c XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "vulkanon/l0_enemy22.hpp" 

extern const BulletStepFunc bullet_a6a7b4134fce4987c3e0694674040be2_09bfd4e879c0988929257729c81f9c4c[] = { 
stepfunc_d51c12748c59a4b79115fd413e988880_09bfd4e879c0988929257729c81f9c4c,
stepfunc_6ba9703189746a284b35c2be3b6f8005_09bfd4e879c0988929257729c81f9c4c,
stepfunc_6ba9703189746a284b35c2be3b6f8005_09bfd4e879c0988929257729c81f9c4c,
stepfunc_6ba9703189746a284b35c2be3b6f8005_09bfd4e879c0988929257729c81f9c4c,
stepfunc_6ba9703189746a284b35c2be3b6f8005_09bfd4e879c0988929257729c81f9c4c,
stepfunc_6ba9703189746a284b35c2be3b6f8005_09bfd4e879c0988929257729c81f9c4c,
stepfunc_6ba9703189746a284b35c2be3b6f8005_09bfd4e879c0988929257729c81f9c4c,
stepfunc_6ba9703189746a284b35c2be3b6f8005_09bfd4e879c0988929257729c81f9c4c,
stepfunc_6ba9703189746a284b35c2be3b6f8005_09bfd4e879c0988929257729c81f9c4c,
stepfunc_22b547e792b3eb30918822b358b0eaf5_09bfd4e879c0988929257729c81f9c4c,
NULL}; 
void stepfunc_6ba9703189746a284b35c2be3b6f8005_09bfd4e879c0988929257729c81f9c4c(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1);  FixedPointNum speed = SelfPos::getAngle(p) + ((0 * 1.0 * 256 / 360)) - p->getAngle();p->setRound(speed, life);}
p->wait = static_cast<u16>(10); 
}
void stepfunc_d51c12748c59a4b79115fd413e988880_09bfd4e879c0988929257729c81f9c4c(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1);  FixedPointNum speed = 1 - p->getSpeed();p->setAccel(speed, life);}
}
void stepfunc_22b547e792b3eb30918822b358b0eaf5_09bfd4e879c0988929257729c81f9c4c(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + ((0 * 1.0 * 256 / 360));  p->lastBulletSpeed = (1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_09bfd4e879c0988929257729c81f9c4c(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_a6a7b4134fce4987c3e0694674040be2_09bfd4e879c0988929257729c81f9c4c); 
  }
return bi;}


