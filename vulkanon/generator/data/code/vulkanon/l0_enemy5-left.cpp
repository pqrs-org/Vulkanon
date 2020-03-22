// XXX uniqID XXX 2c0732a900d9b3e707056d6023b22ceb XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "vulkanon/l0_enemy5-left.hpp" 

extern const BulletStepFunc bullet_51b979055bfa02264c7fa879417bd735_2c0732a900d9b3e707056d6023b22ceb[] = { 
stepfunc_0f0b230a4ab3d82f5ea01408b71c431f_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb,
stepfunc_dae2cf81747ffb5070f05c8837b1d568_2c0732a900d9b3e707056d6023b22ceb,
NULL}; 
void stepfunc_2015d27d528ae3d3a8365fb25a3ad1ea_2c0732a900d9b3e707056d6023b22ceb(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (256 * -90 / 360) + ((180 * 1.0 * 256 / 360));  p->lastBulletSpeed = p->lastBulletSpeed + (0.2);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_dc4f2021c4474822ea00d4d6b301efd6_2c0732a900d9b3e707056d6023b22ceb(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (256 * -90 / 360) + ((180 * 1.0 * 256 / 360));  p->lastBulletSpeed = (1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 5; ++i) { 
stepfunc_2015d27d528ae3d3a8365fb25a3ad1ea_2c0732a900d9b3e707056d6023b22ceb(p);}
p->wait = static_cast<u16>(10); 
}
void stepfunc_0f0b230a4ab3d82f5ea01408b71c431f_2c0732a900d9b3e707056d6023b22ceb(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1);  FixedPointNum speed = (256 * -90 / 360) + ((90 * 1.0 * 256 / 360)) - p->getAngle();p->setRound(speed, life);}
{
  u16 life = static_cast<u16>(1);  FixedPointNum speed = 0.5 - p->getSpeed();p->setAccel(speed, life);}
}
void stepfunc_dae2cf81747ffb5070f05c8837b1d568_2c0732a900d9b3e707056d6023b22ceb(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_2c0732a900d9b3e707056d6023b22ceb(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_51b979055bfa02264c7fa879417bd735_2c0732a900d9b3e707056d6023b22ceb); 
  }
return bi;}


