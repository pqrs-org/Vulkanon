#include "gameparams.hpp"

BossCore<GameParams::BOSS_CORE_POSX, 2, ImageHandler::BGMAP_INDEX_GAME_BOSS> GameParams::bossCore;
BossBody<ImageHandler::BGMAP_INDEX_GAME_BOSS> GameParams::bossBody;
HorizontalLaser<ImageHandler::BGMAP_INDEX_GAME_HORIZONTAL_LASER> GameParams::horizontalLaser;
