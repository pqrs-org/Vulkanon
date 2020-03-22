#include <gba_types.h>
#include "fixed.hpp"
#include "replay.hpp"
#include "gameengine.hpp"
#include "self.hpp"

void
Replay::Header::saveToSRAM(SRAMFileSystem::FilePtr *ptr)
{
  MainInfo::seekFileBody(ptr);

  ptr->write_u8(type);
  ptr->write_u8(getCurrentMissCount());
  ptr->write_u32(getCurrentScore());
  ptr->write_u32(getCurrentPlayTime());
}

int
Replay::Header::getHeaderSize(void)
{
  return 1 + 1 + 4 + 4;
}

void
Replay::Header::loadFromSRAM(SRAMFileSystem::FilePtr *ptr)
{
  MainInfo::seekFileBody(ptr);

  type = static_cast<ReplayType>(ptr->read_u8());
  missCount = ptr->read_u8();
  score = ptr->read_u32();
  playTime = ptr->read_u32();
}


void
Replay::initializeToSave(ReplayTypeLevel _level)
{
  setRandSeed(genrand_int31());
  level = _level;

  keyLog.resetIndex();
}

Replay::ReplayType
Replay::saveToSRAM(void)
{
  // calc saveSize
  int saveSize =
    MainInfo::FILEHEADER_SIZE
    + Header::getHeaderSize()
    + 4 // randSeed
    + keyLog.saveToSRAM(NULL);

  if (saveSize > SRAMFileSystem::MAX_FILE_SIZE) {
    // too large.
    return REPLAY_TYPE_NONE;
  }

  // check old replay
  SRAMFileSystem::FilePtr p;
  ReplayType replayType;

  replayType = makeReplayType(level, REPLAY_TYPE_MODE_BESTSCORE);
  getSavedReplay(&p, MainInfo::sramFS_SRAM, replayType);
  if (p.isNULL() || isBestScore(&p)) {
    if (! p.isNULL()) {
      MainInfo::sramFS_SRAM.deleteFile(p);
    }
    makeNewFileAndWriteToSRAM(saveSize, replayType);
    return makeReplayType(level, REPLAY_TYPE_MODE_BESTSCORE);
  }

  return REPLAY_TYPE_NONE;
}

void
Replay::loadFromSRAM(SRAMFileSystem::FilePtr *ptr)
{
  Header header;

  header.loadFromSRAM(ptr);
  setRandSeed(ptr->read_u32());
  keyLog.loadFromSRAM(ptr);
}

void
Replay::setRandSeed(int _randSeed)
{
  randSeed = _randSeed;
  init_genrand(randSeed);
}

void
Replay::getSavedReplay(SRAMFileSystem::FilePtr *ptr, const SRAMFileSystem &sramFS, ReplayType type)
{
  for (sramFS.getFirstFile(ptr); ! ptr->isNULL(); sramFS.getNextFile(ptr)) {
    if (MainInfo::readFileType(ptr) != MainInfo::FILETYPE_REPLAY) {
      continue;
    }

    Replay::Header savedHeader;
    savedHeader.loadFromSRAM(ptr);
    if (savedHeader.getType() == type) {
      return;
    }
  }
}

bool
Replay::isBestScore(SRAMFileSystem::FilePtr *savedReplayPtr)
{
  Replay::Header savedHeader;
  savedHeader.loadFromSRAM(savedReplayPtr);

  u8 missCount = getCurrentMissCount();
  if (missCount < savedHeader.getMissCount()) {
    return true;
  } else if (missCount > savedHeader.getMissCount()) {
    return false;
  }

  u32 score = getCurrentScore();
  if (score > savedHeader.getScore()) {
    return true;
  } else if (score < savedHeader.getScore()) {
    return false;
  }

  u32 time = getCurrentPlayTime();
  if (time <= savedHeader.getPlayTime()) {
    return true;
  } else {
    return false;
  }
}

bool
Replay::isBestTime(SRAMFileSystem::FilePtr *savedReplayPtr)
{
  Replay::Header savedHeader;
  savedHeader.loadFromSRAM(savedReplayPtr);

  u8 missCount = getCurrentMissCount();
  if (missCount < savedHeader.getMissCount()) {
    return true;
  } else if (missCount > savedHeader.getMissCount()) {
    return false;
  }

  u32 time = getCurrentPlayTime();
  if (time < savedHeader.getPlayTime()) {
    return true;
  } else if (time > savedHeader.getPlayTime()) {
    return false;
  }

  u32 score = getCurrentScore();
  if (score >= savedHeader.getScore()) {
    return true;
  } else {
    return false;
  }
}


void
Replay::makeNewFileAndWriteToSRAM(int saveSize, ReplayType type)
{
  SRAMFileSystem::FilePtr p;
  Header header;

  header.setType(type);

  MainInfo::sramFS_SRAM.newFile(&p, saveSize);
  writeFileType(&p, MainInfo::FILETYPE_REPLAY);
  header.saveToSRAM(&p);
  p.write_u32(randSeed);
  keyLog.saveToSRAM(&p);
}

u8
Replay::getCurrentMissCount(void)
{
  return Self::getMissCount();
}

u32
Replay::getCurrentScore(void)
{
  return GameEngine::getScore();
}

u32
Replay::getCurrentPlayTime(void)
{
  return GameEngine::getPlayTime().toInt();
}
