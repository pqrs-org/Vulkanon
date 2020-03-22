// XXX uniqID XXX f107c17d1c894e586e7489862f23d92e XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "vulkanon/l0_enemy9-left.hpp" 

extern const BulletStepFunc bullet_6bc9aeb041719d9dcbdb390d5bc1bc85_f107c17d1c894e586e7489862f23d92e[] = { 
stepfunc_e02265704f533da974de467a0920f619_f107c17d1c894e586e7489862f23d92e,
stepfunc_05aab8796018ef0a8d1c895b1dbed717_f107c17d1c894e586e7489862f23d92e,
stepfunc_05aab8796018ef0a8d1c895b1dbed717_f107c17d1c894e586e7489862f23d92e,
stepfunc_05aab8796018ef0a8d1c895b1dbed717_f107c17d1c894e586e7489862f23d92e,
stepfunc_05aab8796018ef0a8d1c895b1dbed717_f107c17d1c894e586e7489862f23d92e,
stepfunc_05aab8796018ef0a8d1c895b1dbed717_f107c17d1c894e586e7489862f23d92e,
stepfunc_05aab8796018ef0a8d1c895b1dbed717_f107c17d1c894e586e7489862f23d92e,
stepfunc_05aab8796018ef0a8d1c895b1dbed717_f107c17d1c894e586e7489862f23d92e,
stepfunc_05aab8796018ef0a8d1c895b1dbed717_f107c17d1c894e586e7489862f23d92e,
stepfunc_05aab8796018ef0a8d1c895b1dbed717_f107c17d1c894e586e7489862f23d92e,
stepfunc_05aab8796018ef0a8d1c895b1dbed717_f107c17d1c894e586e7489862f23d92e,
stepfunc_05aab8796018ef0a8d1c895b1dbed717_f107c17d1c894e586e7489862f23d92e,
stepfunc_05aab8796018ef0a8d1c895b1dbed717_f107c17d1c894e586e7489862f23d92e,
stepfunc_05aab8796018ef0a8d1c895b1dbed717_f107c17d1c894e586e7489862f23d92e,
stepfunc_05aab8796018ef0a8d1c895b1dbed717_f107c17d1c894e586e7489862f23d92e,
stepfunc_05aab8796018ef0a8d1c895b1dbed717_f107c17d1c894e586e7489862f23d92e,
stepfunc_05aab8796018ef0a8d1c895b1dbed717_f107c17d1c894e586e7489862f23d92e,
stepfunc_05aab8796018ef0a8d1c895b1dbed717_f107c17d1c894e586e7489862f23d92e,
stepfunc_05aab8796018ef0a8d1c895b1dbed717_f107c17d1c894e586e7489862f23d92e,
stepfunc_05aab8796018ef0a8d1c895b1dbed717_f107c17d1c894e586e7489862f23d92e,
stepfunc_05aab8796018ef0a8d1c895b1dbed717_f107c17d1c894e586e7489862f23d92e,
stepfunc_dae2cf81747ffb5070f05c8837b1d568_f107c17d1c894e586e7489862f23d92e,
NULL}; 
void stepfunc_05aab8796018ef0a8d1c895b1dbed717_f107c17d1c894e586e7489862f23d92e(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (-(5 * 1.0 * 256 / 360));  p->lastBulletSpeed = (2.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
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
void stepfunc_e02265704f533da974de467a0920f619_f107c17d1c894e586e7489862f23d92e(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (256 * -90 / 360) + ((260 * 1.0 * 256 / 360));  p->lastBulletSpeed = (2.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_dae2cf81747ffb5070f05c8837b1d568_f107c17d1c894e586e7489862f23d92e(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_f107c17d1c894e586e7489862f23d92e(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_6bc9aeb041719d9dcbdb390d5bc1bc85_f107c17d1c894e586e7489862f23d92e); 
  }
return bi;}


