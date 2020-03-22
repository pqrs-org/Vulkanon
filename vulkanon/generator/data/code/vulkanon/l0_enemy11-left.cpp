// XXX uniqID XXX aa380a2a544f70146f42c48fb87db420 XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "vulkanon/l0_enemy11-left.hpp" 

extern const BulletStepFunc bullet_38fb7229377211bd9b69d09d9e1f1080_aa380a2a544f70146f42c48fb87db420[] = { 
stepfunc_8c21366c387d9e5541ff10214f08931f_aa380a2a544f70146f42c48fb87db420,
stepfunc_0fdd59aa50ca3c3515c1b7e88bbab930_aa380a2a544f70146f42c48fb87db420,
NULL}; 
extern const BulletStepFunc bullet_5353406edd34ba07c8439a98f0fb7138_aa380a2a544f70146f42c48fb87db420[] = { 
stepfunc_e80bdc5506bf95dd402a596f73c39164_aa380a2a544f70146f42c48fb87db420,
stepfunc_7c5d37dcc527e2e5a705532ae8a1012a_aa380a2a544f70146f42c48fb87db420,
stepfunc_250012650ba3b31daf3fc0597b325104_aa380a2a544f70146f42c48fb87db420,
stepfunc_250012650ba3b31daf3fc0597b325104_aa380a2a544f70146f42c48fb87db420,
stepfunc_250012650ba3b31daf3fc0597b325104_aa380a2a544f70146f42c48fb87db420,
stepfunc_250012650ba3b31daf3fc0597b325104_aa380a2a544f70146f42c48fb87db420,
stepfunc_250012650ba3b31daf3fc0597b325104_aa380a2a544f70146f42c48fb87db420,
stepfunc_250012650ba3b31daf3fc0597b325104_aa380a2a544f70146f42c48fb87db420,
stepfunc_250012650ba3b31daf3fc0597b325104_aa380a2a544f70146f42c48fb87db420,
stepfunc_250012650ba3b31daf3fc0597b325104_aa380a2a544f70146f42c48fb87db420,
stepfunc_250012650ba3b31daf3fc0597b325104_aa380a2a544f70146f42c48fb87db420,
stepfunc_250012650ba3b31daf3fc0597b325104_aa380a2a544f70146f42c48fb87db420,
stepfunc_250012650ba3b31daf3fc0597b325104_aa380a2a544f70146f42c48fb87db420,
stepfunc_250012650ba3b31daf3fc0597b325104_aa380a2a544f70146f42c48fb87db420,
stepfunc_250012650ba3b31daf3fc0597b325104_aa380a2a544f70146f42c48fb87db420,
stepfunc_250012650ba3b31daf3fc0597b325104_aa380a2a544f70146f42c48fb87db420,
stepfunc_250012650ba3b31daf3fc0597b325104_aa380a2a544f70146f42c48fb87db420,
stepfunc_250012650ba3b31daf3fc0597b325104_aa380a2a544f70146f42c48fb87db420,
stepfunc_250012650ba3b31daf3fc0597b325104_aa380a2a544f70146f42c48fb87db420,
stepfunc_250012650ba3b31daf3fc0597b325104_aa380a2a544f70146f42c48fb87db420,
stepfunc_250012650ba3b31daf3fc0597b325104_aa380a2a544f70146f42c48fb87db420,
stepfunc_250012650ba3b31daf3fc0597b325104_aa380a2a544f70146f42c48fb87db420,
stepfunc_fddccad3a4269a6062fda865a05f419c_aa380a2a544f70146f42c48fb87db420,
NULL}; 
void stepfunc_8c21366c387d9e5541ff10214f08931f_aa380a2a544f70146f42c48fb87db420(BulletInfo *p) { 
p->wait = (FixedPointNum::random()*5).toInt(); 
}
void stepfunc_0fdd59aa50ca3c3515c1b7e88bbab930_aa380a2a544f70146f42c48fb87db420(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1);  FixedPointNum speed = SelfPos::getAngle(p) + ((0 * 1.0 * 256 / 360)) - p->getAngle();p->setRound(speed, life);}
}
void stepfunc_250012650ba3b31daf3fc0597b325104_aa380a2a544f70146f42c48fb87db420(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (((90 * 1.0 * 256 / 360)));  p->lastBulletSpeed = (2);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_38fb7229377211bd9b69d09d9e1f1080_aa380a2a544f70146f42c48fb87db420); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + ((-(90 * 1.0 * 256 / 360)));  p->lastBulletSpeed = (2);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_38fb7229377211bd9b69d09d9e1f1080_aa380a2a544f70146f42c48fb87db420); 
  }
}
p->wait = static_cast<u16>(2); 
}
void stepfunc_e80bdc5506bf95dd402a596f73c39164_aa380a2a544f70146f42c48fb87db420(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1);  FixedPointNum speed = (256 * -90 / 360) + (-(90 * 1.0 * 256 / 360)) - p->getAngle();p->setRound(speed, life);}
{
  u16 life = static_cast<u16>(1);  FixedPointNum speed = 2 - p->getSpeed();p->setAccel(speed, life);}
p->wait = static_cast<u16>(2); 
}
void stepfunc_7c5d37dcc527e2e5a705532ae8a1012a_aa380a2a544f70146f42c48fb87db420(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(120);  FixedPointNum speed = FixedPointNum(1 - p->getSpeed(), life);p->setAccel(speed, life);}
}
void stepfunc_fddccad3a4269a6062fda865a05f419c_aa380a2a544f70146f42c48fb87db420(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_aa380a2a544f70146f42c48fb87db420(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_5353406edd34ba07c8439a98f0fb7138_aa380a2a544f70146f42c48fb87db420); 
  }
return bi;}


