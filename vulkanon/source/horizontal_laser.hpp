#ifndef HORIZONTAL_LASER_HPP
#define HORIZONTAL_LASER_HPP

#include "imagehandler.hpp"
#include "common.hpp"

template <int _BGMAP_INDEX>
class HorizontalLaser {
public:
  enum {
    // MAX_POWER_NUM must be 2^x
    MAX_POWER_NUM = 1024,

    LASER_MOVE_PER_FRAME = 4,
  };

  void initialize(void) {
    power = MAX_POWER_NUM;
    resetPosY();

    drawLaser();
  }

  void succ(void) {
    power += (power < MAX_POWER_NUM);
  }

  void step(void) {
    ImageHandler::drawOpacityNumber<3>(4, 0, getPercent(), ImageHandler::BGCOLOR_FONT_RED + isFullPower());
    if (isFire()) {
      posY -= LASER_MOVE_PER_FRAME;
      if (posY <= 0) {
        BG1VOFS = 0;
        resetPosY();
      } else {
        BG1VOFS = Common::SCREEN_SIZE_Y - posY;
      }
    }
  }

  bool isFullPower(void) const {
    return power == MAX_POWER_NUM;
  }

  bool isFire(void) const {
    return posY < Common::SCREEN_SIZE_Y;
  }

  bool fire(void) {
    if (isFullPower() & (! isFire())) {
      posY = Common::SCREEN_SIZE_Y - 1;
      power = 0;
      return true;
    } else {
      return false;
    }
  }

  int getPosY(void) {
    return posY;
  }

private:
  int getPercent(void) const {
    return (power * 100) / MAX_POWER_NUM;
  }

  void resetPosY(void) {
    posY = Common::SCREEN_SIZE_Y;
  }

  void drawLaser(void) {
    u16 *bg = static_cast<u16 *>(MAP_BASE_ADR(_BGMAP_INDEX));
    bg += 32 * 20;
    for (int i = 0; i < 32; ++i) {
      *bg++ = ImageResource::getTileIndex<ImageResource::BG_HORIZONTAL_LASER>::value | BG_PALETTE(ImageHandler::BGCOLOR_HORIZONTAL_LASER);
    }
  }

  int power;
  int posY;
};

#endif
