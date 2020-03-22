// XXX uniqID XXX 444e03c42d0db749411ffb80b473544e XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "vulkanon/l0_enemy9-right.hpp" 

extern const BulletStepFunc bullet_8a0704ffc1a026725ca3cfa9bc986f73_444e03c42d0db749411ffb80b473544e[] = { 
stepfunc_a8039100d814a18bac47c45ffcba8e1f_444e03c42d0db749411ffb80b473544e,
stepfunc_c5a85e076c4034d7e927399b715db7d3_444e03c42d0db749411ffb80b473544e,
stepfunc_c5a85e076c4034d7e927399b715db7d3_444e03c42d0db749411ffb80b473544e,
stepfunc_c5a85e076c4034d7e927399b715db7d3_444e03c42d0db749411ffb80b473544e,
stepfunc_c5a85e076c4034d7e927399b715db7d3_444e03c42d0db749411ffb80b473544e,
stepfunc_c5a85e076c4034d7e927399b715db7d3_444e03c42d0db749411ffb80b473544e,
stepfunc_c5a85e076c4034d7e927399b715db7d3_444e03c42d0db749411ffb80b473544e,
stepfunc_c5a85e076c4034d7e927399b715db7d3_444e03c42d0db749411ffb80b473544e,
stepfunc_c5a85e076c4034d7e927399b715db7d3_444e03c42d0db749411ffb80b473544e,
stepfunc_c5a85e076c4034d7e927399b715db7d3_444e03c42d0db749411ffb80b473544e,
stepfunc_c5a85e076c4034d7e927399b715db7d3_444e03c42d0db749411ffb80b473544e,
stepfunc_c5a85e076c4034d7e927399b715db7d3_444e03c42d0db749411ffb80b473544e,
stepfunc_c5a85e076c4034d7e927399b715db7d3_444e03c42d0db749411ffb80b473544e,
stepfunc_c5a85e076c4034d7e927399b715db7d3_444e03c42d0db749411ffb80b473544e,
stepfunc_c5a85e076c4034d7e927399b715db7d3_444e03c42d0db749411ffb80b473544e,
stepfunc_c5a85e076c4034d7e927399b715db7d3_444e03c42d0db749411ffb80b473544e,
stepfunc_c5a85e076c4034d7e927399b715db7d3_444e03c42d0db749411ffb80b473544e,
stepfunc_c5a85e076c4034d7e927399b715db7d3_444e03c42d0db749411ffb80b473544e,
stepfunc_c5a85e076c4034d7e927399b715db7d3_444e03c42d0db749411ffb80b473544e,
stepfunc_c5a85e076c4034d7e927399b715db7d3_444e03c42d0db749411ffb80b473544e,
stepfunc_c5a85e076c4034d7e927399b715db7d3_444e03c42d0db749411ffb80b473544e,
stepfunc_dae2cf81747ffb5070f05c8837b1d568_444e03c42d0db749411ffb80b473544e,
NULL}; 
void stepfunc_c5a85e076c4034d7e927399b715db7d3_444e03c42d0db749411ffb80b473544e(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + ((5 * 1.0 * 256 / 360));  p->lastBulletSpeed = (2.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + ((0 * 1.0 * 256 / 360));  p->lastBulletSpeed = (1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + ((0 * 1.0 * 256 / 360));  p->lastBulletSpeed = p->lastBulletSpeed + (0.2);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + ((0 * 1.0 * 256 / 360));  p->lastBulletSpeed = p->lastBulletSpeed + (0.2);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + ((0 * 1.0 * 256 / 360));  p->lastBulletSpeed = p->lastBulletSpeed + (0.2);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + ((0 * 1.0 * 256 / 360));  p->lastBulletSpeed = p->lastBulletSpeed + (0.2);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + ((0 * 1.0 * 256 / 360));  p->lastBulletSpeed = p->lastBulletSpeed + (0.2);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + ((0 * 1.0 * 256 / 360));  p->lastBulletSpeed = p->lastBulletSpeed + (0.2);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
p->wait = static_cast<u16>(2); 
}
void stepfunc_a8039100d814a18bac47c45ffcba8e1f_444e03c42d0db749411ffb80b473544e(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (256 * -90 / 360) + ((100 * 1.0 * 256 / 360));  p->lastBulletSpeed = (2.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_dae2cf81747ffb5070f05c8837b1d568_444e03c42d0db749411ffb80b473544e(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_444e03c42d0db749411ffb80b473544e(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_8a0704ffc1a026725ca3cfa9bc986f73_444e03c42d0db749411ffb80b473544e); 
  }
return bi;}


