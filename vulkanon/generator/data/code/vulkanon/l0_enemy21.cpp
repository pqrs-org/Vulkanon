// XXX uniqID XXX c787821cbc147550a9bd0da97aff775e XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "vulkanon/l0_enemy21.hpp" 

extern const BulletStepFunc bullet_bf01d1221ae9777d09c2f97a8267fcfa_c787821cbc147550a9bd0da97aff775e[] = { 
stepfunc_7e7dadc68e5534e49808867fe7fa818b_c787821cbc147550a9bd0da97aff775e,
stepfunc_ddb40bd414abc157ba0fa4b188258d38_c787821cbc147550a9bd0da97aff775e,
stepfunc_902359f4db9d675ea2dcd70e44697adb_c787821cbc147550a9bd0da97aff775e,
stepfunc_8fff89501dcb48caade16bb16deb7b61_c787821cbc147550a9bd0da97aff775e,
stepfunc_503028b87c9460063cf45c9685a9e31b_c787821cbc147550a9bd0da97aff775e,
NULL}; 
void stepfunc_7ae946704ec367732b1d66d3c976f167_c787821cbc147550a9bd0da97aff775e(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + ((0 * 1.0 * 256 / 360));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + ((2 * 1.0 * 256 / 360));  p->lastBulletSpeed = p->lastBulletSpeed + (0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + ((4 * 1.0 * 256 / 360));  p->lastBulletSpeed = p->lastBulletSpeed + (0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (-(2 * 1.0 * 256 / 360));  p->lastBulletSpeed = p->lastBulletSpeed + (0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (-(4 * 1.0 * 256 / 360));  p->lastBulletSpeed = p->lastBulletSpeed + (0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_7e7dadc68e5534e49808867fe7fa818b_c787821cbc147550a9bd0da97aff775e(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1);  FixedPointNum speed = (256 * -90 / 360) + ((180 * 1.0 * 256 / 360)) - p->getAngle();p->setRound(speed, life);}
{
  u16 life = static_cast<u16>(1);  FixedPointNum speed = 1 - p->getSpeed();p->setAccel(speed, life);}
p->wait = static_cast<u16>(60); 
}
void stepfunc_ddb40bd414abc157ba0fa4b188258d38_c787821cbc147550a9bd0da97aff775e(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(10);  FixedPointNum speed = FixedPointNum(0 - p->getSpeed(), life);p->setAccel(speed, life);}
p->wait = static_cast<u16>(10); 
}
void stepfunc_902359f4db9d675ea2dcd70e44697adb_c787821cbc147550a9bd0da97aff775e(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1);  FixedPointNum speed = (256 * -90 / 360) + ((0 * 1.0 * 256 / 360)) - p->getAngle();p->setRound(speed, life);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + ((0 * 1.0 * 256 / 360));  p->lastBulletSpeed = (1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 5; ++i) { 
stepfunc_7ae946704ec367732b1d66d3c976f167_c787821cbc147550a9bd0da97aff775e(p);}
{
  u16 life = static_cast<u16>(10);  FixedPointNum speed = FixedPointNum(1 - p->getSpeed(), life);p->setAccel(speed, life);}
p->wait = static_cast<u16>(10); 
}
void stepfunc_8fff89501dcb48caade16bb16deb7b61_c787821cbc147550a9bd0da97aff775e(BulletInfo *p) { 
p->wait = static_cast<u16>(60); 
}
void stepfunc_503028b87c9460063cf45c9685a9e31b_c787821cbc147550a9bd0da97aff775e(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + ((0 * 1.0 * 256 / 360));  p->lastBulletSpeed = (2);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_c787821cbc147550a9bd0da97aff775e(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_bf01d1221ae9777d09c2f97a8267fcfa_c787821cbc147550a9bd0da97aff775e); 
  }
return bi;}


