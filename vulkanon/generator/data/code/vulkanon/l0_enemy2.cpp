// XXX uniqID XXX 1dce9b78d98783de77dd9c4da10bc546 XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "vulkanon/l0_enemy2.hpp" 

extern const BulletStepFunc bullet_ef36170a79bca743cc5db5ca94a5b6ba_1dce9b78d98783de77dd9c4da10bc546[] = { 
stepfunc_b54b223c2d4a5cf729728840692a92be_1dce9b78d98783de77dd9c4da10bc546,
stepfunc_83ff01d7f4a03a80839ba4fdced68045_1dce9b78d98783de77dd9c4da10bc546,
stepfunc_83ff01d7f4a03a80839ba4fdced68045_1dce9b78d98783de77dd9c4da10bc546,
stepfunc_83ff01d7f4a03a80839ba4fdced68045_1dce9b78d98783de77dd9c4da10bc546,
stepfunc_83ff01d7f4a03a80839ba4fdced68045_1dce9b78d98783de77dd9c4da10bc546,
stepfunc_83ff01d7f4a03a80839ba4fdced68045_1dce9b78d98783de77dd9c4da10bc546,
stepfunc_dae2cf81747ffb5070f05c8837b1d568_1dce9b78d98783de77dd9c4da10bc546,
NULL}; 
void stepfunc_372f7bba3c1db34154d2b39e0144c266_1dce9b78d98783de77dd9c4da10bc546(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + ((2 * 1.0 * 256 / 360));  p->lastBulletSpeed = (3);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_83ff01d7f4a03a80839ba4fdced68045_1dce9b78d98783de77dd9c4da10bc546(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (256 * -90 / 360) + ((170 * 1.0 * 256 / 360));  p->lastBulletSpeed = (3);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 9; ++i) { 
stepfunc_372f7bba3c1db34154d2b39e0144c266_1dce9b78d98783de77dd9c4da10bc546(p);}
p->wait = static_cast<u16>(5); 
}
void stepfunc_b54b223c2d4a5cf729728840692a92be_1dce9b78d98783de77dd9c4da10bc546(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1);  FixedPointNum speed = 1 - p->getSpeed();p->setAccel(speed, life);}
{
  u16 life = static_cast<u16>(1);  FixedPointNum speed = (256 * -90 / 360) + ((180 * 1.0 * 256 / 360)) - p->getAngle();p->setRound(speed, life);}
p->wait = static_cast<u16>(60); 
}
void stepfunc_dae2cf81747ffb5070f05c8837b1d568_1dce9b78d98783de77dd9c4da10bc546(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_1dce9b78d98783de77dd9c4da10bc546(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_ef36170a79bca743cc5db5ca94a5b6ba_1dce9b78d98783de77dd9c4da10bc546); 
  }
return bi;}


