// XXX uniqID XXX 59b8e2343c4e9df70d90f97eb1458c37 XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "vulkanon/l0_enemy5-right.hpp" 

extern const BulletStepFunc bullet_15795ebc0cd3e231df26f50c165eab4c_59b8e2343c4e9df70d90f97eb1458c37[] = { 
stepfunc_822e838f92af219607f84c9e4032b909_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37,
stepfunc_dae2cf81747ffb5070f05c8837b1d568_59b8e2343c4e9df70d90f97eb1458c37,
NULL}; 
void stepfunc_2015d27d528ae3d3a8365fb25a3ad1ea_59b8e2343c4e9df70d90f97eb1458c37(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (256 * -90 / 360) + ((180 * 1.0 * 256 / 360));  p->lastBulletSpeed = p->lastBulletSpeed + (0.2);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_1430c93ec48147bb856fc73ee0dd405e_59b8e2343c4e9df70d90f97eb1458c37(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (256 * -90 / 360) + ((180 * 1.0 * 256 / 360));  p->lastBulletSpeed = (1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 5; ++i) { 
stepfunc_2015d27d528ae3d3a8365fb25a3ad1ea_59b8e2343c4e9df70d90f97eb1458c37(p);}
p->wait = static_cast<u16>(10); 
}
void stepfunc_822e838f92af219607f84c9e4032b909_59b8e2343c4e9df70d90f97eb1458c37(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1);  FixedPointNum speed = (256 * -90 / 360) + ((270 * 1.0 * 256 / 360)) - p->getAngle();p->setRound(speed, life);}
{
  u16 life = static_cast<u16>(1);  FixedPointNum speed = 0.5 - p->getSpeed();p->setAccel(speed, life);}
}
void stepfunc_dae2cf81747ffb5070f05c8837b1d568_59b8e2343c4e9df70d90f97eb1458c37(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_59b8e2343c4e9df70d90f97eb1458c37(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_15795ebc0cd3e231df26f50c165eab4c_59b8e2343c4e9df70d90f97eb1458c37); 
  }
return bi;}


