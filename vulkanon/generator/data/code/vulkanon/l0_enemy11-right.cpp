// XXX uniqID XXX 65e68c740ee2a220ba8c5031c4b6d1b3 XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "vulkanon/l0_enemy11-right.hpp" 

extern const BulletStepFunc bullet_26f53c9f2427bac325ee36cb79cb32f6_65e68c740ee2a220ba8c5031c4b6d1b3[] = { 
stepfunc_8c21366c387d9e5541ff10214f08931f_65e68c740ee2a220ba8c5031c4b6d1b3,
stepfunc_0fdd59aa50ca3c3515c1b7e88bbab930_65e68c740ee2a220ba8c5031c4b6d1b3,
NULL}; 
extern const BulletStepFunc bullet_a3fa37377dc8a6dc07d59744827f3bb5_65e68c740ee2a220ba8c5031c4b6d1b3[] = { 
stepfunc_62bf6c87a01c17857bce3310e4499e81_65e68c740ee2a220ba8c5031c4b6d1b3,
stepfunc_7c5d37dcc527e2e5a705532ae8a1012a_65e68c740ee2a220ba8c5031c4b6d1b3,
stepfunc_3c4bb6e76b4f504b370a1b4f01720982_65e68c740ee2a220ba8c5031c4b6d1b3,
stepfunc_3c4bb6e76b4f504b370a1b4f01720982_65e68c740ee2a220ba8c5031c4b6d1b3,
stepfunc_3c4bb6e76b4f504b370a1b4f01720982_65e68c740ee2a220ba8c5031c4b6d1b3,
stepfunc_3c4bb6e76b4f504b370a1b4f01720982_65e68c740ee2a220ba8c5031c4b6d1b3,
stepfunc_3c4bb6e76b4f504b370a1b4f01720982_65e68c740ee2a220ba8c5031c4b6d1b3,
stepfunc_3c4bb6e76b4f504b370a1b4f01720982_65e68c740ee2a220ba8c5031c4b6d1b3,
stepfunc_3c4bb6e76b4f504b370a1b4f01720982_65e68c740ee2a220ba8c5031c4b6d1b3,
stepfunc_3c4bb6e76b4f504b370a1b4f01720982_65e68c740ee2a220ba8c5031c4b6d1b3,
stepfunc_3c4bb6e76b4f504b370a1b4f01720982_65e68c740ee2a220ba8c5031c4b6d1b3,
stepfunc_3c4bb6e76b4f504b370a1b4f01720982_65e68c740ee2a220ba8c5031c4b6d1b3,
stepfunc_3c4bb6e76b4f504b370a1b4f01720982_65e68c740ee2a220ba8c5031c4b6d1b3,
stepfunc_3c4bb6e76b4f504b370a1b4f01720982_65e68c740ee2a220ba8c5031c4b6d1b3,
stepfunc_3c4bb6e76b4f504b370a1b4f01720982_65e68c740ee2a220ba8c5031c4b6d1b3,
stepfunc_3c4bb6e76b4f504b370a1b4f01720982_65e68c740ee2a220ba8c5031c4b6d1b3,
stepfunc_3c4bb6e76b4f504b370a1b4f01720982_65e68c740ee2a220ba8c5031c4b6d1b3,
stepfunc_3c4bb6e76b4f504b370a1b4f01720982_65e68c740ee2a220ba8c5031c4b6d1b3,
stepfunc_3c4bb6e76b4f504b370a1b4f01720982_65e68c740ee2a220ba8c5031c4b6d1b3,
stepfunc_3c4bb6e76b4f504b370a1b4f01720982_65e68c740ee2a220ba8c5031c4b6d1b3,
stepfunc_3c4bb6e76b4f504b370a1b4f01720982_65e68c740ee2a220ba8c5031c4b6d1b3,
stepfunc_3c4bb6e76b4f504b370a1b4f01720982_65e68c740ee2a220ba8c5031c4b6d1b3,
stepfunc_fddccad3a4269a6062fda865a05f419c_65e68c740ee2a220ba8c5031c4b6d1b3,
NULL}; 
void stepfunc_8c21366c387d9e5541ff10214f08931f_65e68c740ee2a220ba8c5031c4b6d1b3(BulletInfo *p) { 
p->wait = (FixedPointNum::random()*5).toInt(); 
}
void stepfunc_0fdd59aa50ca3c3515c1b7e88bbab930_65e68c740ee2a220ba8c5031c4b6d1b3(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1);  FixedPointNum speed = SelfPos::getAngle(p) + ((0 * 1.0 * 256 / 360)) - p->getAngle();p->setRound(speed, life);}
}
void stepfunc_3c4bb6e76b4f504b370a1b4f01720982_65e68c740ee2a220ba8c5031c4b6d1b3(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (((90 * 1.0 * 256 / 360)));  p->lastBulletSpeed = (2);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_26f53c9f2427bac325ee36cb79cb32f6_65e68c740ee2a220ba8c5031c4b6d1b3); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + ((-(90 * 1.0 * 256 / 360)));  p->lastBulletSpeed = (2);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_26f53c9f2427bac325ee36cb79cb32f6_65e68c740ee2a220ba8c5031c4b6d1b3); 
  }
}
p->wait = static_cast<u16>(2); 
}
void stepfunc_62bf6c87a01c17857bce3310e4499e81_65e68c740ee2a220ba8c5031c4b6d1b3(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1);  FixedPointNum speed = (256 * -90 / 360) + ((90 * 1.0 * 256 / 360)) - p->getAngle();p->setRound(speed, life);}
{
  u16 life = static_cast<u16>(1);  FixedPointNum speed = 2 - p->getSpeed();p->setAccel(speed, life);}
p->wait = static_cast<u16>(2); 
}
void stepfunc_7c5d37dcc527e2e5a705532ae8a1012a_65e68c740ee2a220ba8c5031c4b6d1b3(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(120);  FixedPointNum speed = FixedPointNum(1 - p->getSpeed(), life);p->setAccel(speed, life);}
}
void stepfunc_fddccad3a4269a6062fda865a05f419c_65e68c740ee2a220ba8c5031c4b6d1b3(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_65e68c740ee2a220ba8c5031c4b6d1b3(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_a3fa37377dc8a6dc07d59744827f3bb5_65e68c740ee2a220ba8c5031c4b6d1b3); 
  }
return bi;}


