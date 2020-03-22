// XXX uniqID XXX fd52ad7c32cd66562d39fa277c4b3797 XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "vulkanon/l0_enemy12.hpp" 

extern const BulletStepFunc bullet_ad17e24e2aa20f678a19b17be5213ea0_fd52ad7c32cd66562d39fa277c4b3797[] = { 
stepfunc_d5b50929d4498db95fe3b57b9c6c8094_fd52ad7c32cd66562d39fa277c4b3797,
NULL}; 
void stepfunc_e1cb05365e955e6c9fc4a42f10774254_fd52ad7c32cd66562d39fa277c4b3797(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + ((0 * 1.0 * 256 / 360));  p->lastBulletSpeed = p->lastBulletSpeed + (0.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_d5b50929d4498db95fe3b57b9c6c8094_fd52ad7c32cd66562d39fa277c4b3797(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + ((0 * 1.0 * 256 / 360));  p->lastBulletSpeed = (2);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 10; ++i) { 
stepfunc_e1cb05365e955e6c9fc4a42f10774254_fd52ad7c32cd66562d39fa277c4b3797(p);}
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_fd52ad7c32cd66562d39fa277c4b3797(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_ad17e24e2aa20f678a19b17be5213ea0_fd52ad7c32cd66562d39fa277c4b3797); 
  }
return bi;}


