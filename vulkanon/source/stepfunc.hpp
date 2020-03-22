#ifndef STEPFUNC_HPP
#define STEPFUNC_HPP

#include "imagehandler.hpp"

class StepFunc {
public:
  static const BulletStepFunc nullStepFuncList[];
  static const BulletStepFunc effectHitStepFuncList[];
  static const BulletStepFunc effectBonusStepFuncList[];
  static const BulletStepFunc explodeWithTargetSelfStepFuncList[];
  static const BulletStepFunc explodeWithOriginalDirectionStepFuncList[];

  static void fireTargetSelf(BulletInfo *p) {
    int rand = 8;
    p->setType(BULLET_TYPE_SUICIDE_TARGET_SELF_BULLET);
    p->setAngleAndSpped(SelfPos::getAngle(p) + FixedPointNum::random() * rand - rand / 2, 0.5);
  }

  static void fireOriginalDirection(BulletInfo *p) {
    p->setType(BULLET_TYPE_SUICIDE_ORIGINAL_DIRECTION_BULLET);
    p->setAngleAndSpped(p->lastBulletAngle, 0.5);
  }

  template <int _speed>
  static void setSpeed(BulletInfo *p) {
    p->setSpeed(_speed);
  }

  static void explode(BulletInfo *p) {
    p->lastBulletAngle = p->getAngle();
    p->setAngleAndSpped(270 * FixedPointNum::ANGLENUM / 360, 2);
    effectHit(p);
  }

  static void effectHit(BulletInfo *p) {
    p->setType(BULLET_TYPE_EXPLODE);
    p->wait = ImageHandler::OBJTILE_EXPLODE_PATTERN;
  }

  static void effectBonus(BulletInfo *p) {
    p->setType(BULLET_TYPE_BONUS);
    p->setAngleAndSpped(270 * FixedPointNum::ANGLENUM / 360, 0.5);
    p->wait = 16;
  }

  static void hidden(BulletInfo *p) {
    p->setType(BULLET_TYPE_HIDDEN);
  }

  static void stop(BulletInfo *p) {
    p->stop();
  }

  template<int _wait> static void wait(BulletInfo *p) {
    p->wait = _wait;
  }
};


#endif
