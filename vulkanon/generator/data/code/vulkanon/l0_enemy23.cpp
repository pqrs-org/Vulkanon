// XXX uniqID XXX 318a5e347d432a1a29542cd45457692a XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "vulkanon/l0_enemy23.hpp" 

extern const BulletStepFunc bullet_72977f5a201704a116fed2c268b98db5_318a5e347d432a1a29542cd45457692a[] = { 
stepfunc_b9f3746024faf71a948d02a3f58cba12_318a5e347d432a1a29542cd45457692a,
stepfunc_874e5b4a542f0f7f52ac24d8da866549_318a5e347d432a1a29542cd45457692a,
NULL}; 
extern const BulletStepFunc bullet_da391036f4887058d231358ef78fb2f0_318a5e347d432a1a29542cd45457692a[] = { 
stepfunc_f8e5484dd9ba577849087e287b940bef_318a5e347d432a1a29542cd45457692a,
stepfunc_f8e5484dd9ba577849087e287b940bef_318a5e347d432a1a29542cd45457692a,
stepfunc_f8e5484dd9ba577849087e287b940bef_318a5e347d432a1a29542cd45457692a,
stepfunc_f8e5484dd9ba577849087e287b940bef_318a5e347d432a1a29542cd45457692a,
stepfunc_f8e5484dd9ba577849087e287b940bef_318a5e347d432a1a29542cd45457692a,
stepfunc_f8e5484dd9ba577849087e287b940bef_318a5e347d432a1a29542cd45457692a,
stepfunc_f8e5484dd9ba577849087e287b940bef_318a5e347d432a1a29542cd45457692a,
stepfunc_f8e5484dd9ba577849087e287b940bef_318a5e347d432a1a29542cd45457692a,
stepfunc_f8e5484dd9ba577849087e287b940bef_318a5e347d432a1a29542cd45457692a,
stepfunc_f8e5484dd9ba577849087e287b940bef_318a5e347d432a1a29542cd45457692a,
stepfunc_f8e5484dd9ba577849087e287b940bef_318a5e347d432a1a29542cd45457692a,
stepfunc_f8e5484dd9ba577849087e287b940bef_318a5e347d432a1a29542cd45457692a,
stepfunc_dae2cf81747ffb5070f05c8837b1d568_318a5e347d432a1a29542cd45457692a,
NULL}; 
void stepfunc_b9f3746024faf71a948d02a3f58cba12_318a5e347d432a1a29542cd45457692a(BulletInfo *p) { 
p->wait = static_cast<u16>(10); 
}
void stepfunc_874e5b4a542f0f7f52ac24d8da866549_318a5e347d432a1a29542cd45457692a(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1);  FixedPointNum speed = (256 * -90 / 360) + ((180 * 1.0 * 256 / 360)) - p->getAngle();p->setRound(speed, life);}
}
void stepfunc_f8e5484dd9ba577849087e287b940bef_318a5e347d432a1a29542cd45457692a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + ((30 * 1.0 * 256 / 360));  p->lastBulletSpeed = (1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_NORMAL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_72977f5a201704a116fed2c268b98db5_318a5e347d432a1a29542cd45457692a); 
  }
}
}
void stepfunc_dae2cf81747ffb5070f05c8837b1d568_318a5e347d432a1a29542cd45457692a(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_318a5e347d432a1a29542cd45457692a(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_da391036f4887058d231358ef78fb2f0_318a5e347d432a1a29542cd45457692a); 
  }
return bi;}


