// XXX uniqID XXX dec11e16a9f1150c45961315fc55e25c XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "vulkanon/l0_enemy4.hpp" 

extern const BulletStepFunc bullet_5ad4cc59553d10a405cdbb198b001267_dec11e16a9f1150c45961315fc55e25c[] = { 
stepfunc_496a177f09c6c70ac478a8ede25ddcfc_dec11e16a9f1150c45961315fc55e25c,
stepfunc_3ddde2bccad344bc5031effee359580c_dec11e16a9f1150c45961315fc55e25c,
stepfunc_3ddde2bccad344bc5031effee359580c_dec11e16a9f1150c45961315fc55e25c,
stepfunc_3ddde2bccad344bc5031effee359580c_dec11e16a9f1150c45961315fc55e25c,
stepfunc_3ddde2bccad344bc5031effee359580c_dec11e16a9f1150c45961315fc55e25c,
stepfunc_3ddde2bccad344bc5031effee359580c_dec11e16a9f1150c45961315fc55e25c,
stepfunc_dae2cf81747ffb5070f05c8837b1d568_dec11e16a9f1150c45961315fc55e25c,
NULL}; 
void stepfunc_687865cd066bd880f8eb8a7528e62995_dec11e16a9f1150c45961315fc55e25c(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + ((0 * 1.0 * 256 / 360));  p->lastBulletSpeed = p->lastBulletSpeed + (0.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
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
void stepfunc_3ddde2bccad344bc5031effee359580c_dec11e16a9f1150c45961315fc55e25c(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + ((0 * 1.0 * 256 / 360));  p->lastBulletSpeed = (1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 5; ++i) { 
stepfunc_687865cd066bd880f8eb8a7528e62995_dec11e16a9f1150c45961315fc55e25c(p);}
p->wait = static_cast<u16>(10); 
}
void stepfunc_496a177f09c6c70ac478a8ede25ddcfc_dec11e16a9f1150c45961315fc55e25c(BulletInfo *p) { 
p->wait = static_cast<u16>(120); 
}
void stepfunc_dae2cf81747ffb5070f05c8837b1d568_dec11e16a9f1150c45961315fc55e25c(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_dec11e16a9f1150c45961315fc55e25c(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_5ad4cc59553d10a405cdbb198b001267_dec11e16a9f1150c45961315fc55e25c); 
  }
return bi;}


