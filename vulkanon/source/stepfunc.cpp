#include "bullet.hpp"
#include "stepfunc.hpp"
#include "gameengine.hpp"

const BulletStepFunc StepFunc::nullStepFuncList[] = {
  NULL,
  NULL,
};


const BulletStepFunc StepFunc::effectHitStepFuncList[] = {
  StepFunc::effectHit,
  ListBullets::stepFuncDrop,
  NULL,
};

const BulletStepFunc StepFunc::effectBonusStepFuncList[] = {
  StepFunc::effectBonus,
  ListBullets::stepFuncDrop,
  NULL,
};


const BulletStepFunc StepFunc::explodeWithTargetSelfStepFuncList[] = {
  StepFunc::stop,
  StepFunc::explode,
  StepFunc::hidden,
  StepFunc::wait<10>,
  StepFunc::fireTargetSelf,
  StepFunc::wait<20>,
  StepFunc::setSpeed<2>,
  NULL,
};

const BulletStepFunc StepFunc::explodeWithOriginalDirectionStepFuncList[] = {
  StepFunc::stop,
  StepFunc::explode,
  StepFunc::hidden,
  StepFunc::wait<10>,
  StepFunc::fireOriginalDirection,
  StepFunc::wait<20>,
  StepFunc::setSpeed<2>,
  NULL,
};
