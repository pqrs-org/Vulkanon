#include <stdio.h>
#include "common.hpp"
#include "bullet.hpp"

Stack<BulletInfo*, ListBullets::MAXNUM> ListBullets::freeInfoStack;

BulletInfo ListBullets::bltinfo[MAXNUM];
BulletInfo *ListBullets::firstNode = NULL;

FixedPointNum SelfPos::posx;
FixedPointNum SelfPos::posy;
