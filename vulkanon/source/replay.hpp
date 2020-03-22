#ifndef REPLAY_HPP
#define REPLAY_HPP

#include "main.hpp"
#include "libsram_fs.hpp"
#include "libkeylog.hpp"

class Replay {
public:
  enum ReplayTypeLevel {
    REPLAY_TYPE_LEVEL_0 = (0 << 4),
    REPLAY_TYPE_LEVEL_1 = (1 << 4),
    REPLAY_TYPE_LEVEL_2 = (2 << 4),
    REPLAY_TYPE_LEVEL_3 = (3 << 4),
  };

  enum ReplayTypeMode {
    REPLAY_TYPE_MODE_BESTSCORE =  1,
  };

  enum ReplayType {
    REPLAY_TYPE_NONE = 0,
    REPLAY_TYPE_BESTSCORE_LEVEL0 =  REPLAY_TYPE_LEVEL_0 | REPLAY_TYPE_MODE_BESTSCORE,
    REPLAY_TYPE_BESTSCORE_LEVEL1 =  REPLAY_TYPE_LEVEL_1 | REPLAY_TYPE_MODE_BESTSCORE,
    REPLAY_TYPE_BESTSCORE_LEVEL2 =  REPLAY_TYPE_LEVEL_2 | REPLAY_TYPE_MODE_BESTSCORE,
    REPLAY_TYPE_BESTSCORE_LEVEL3 =  REPLAY_TYPE_LEVEL_3 | REPLAY_TYPE_MODE_BESTSCORE,
  };

  class Header {
  public:
    void saveToSRAM(SRAMFileSystem::FilePtr *ptr);
    static int getHeaderSize(void);
    void loadFromSRAM(SRAMFileSystem::FilePtr *ptr);

    void setType(ReplayType _type) { type = _type; }

    ReplayType getType(void) const { return type; }
    u8 getMissCount(void) const { return missCount; }
    u32 getScore(void) const { return score; }
    u32 getPlayTime(void) const { return playTime; }

  private:
    ReplayType type;
    u8 missCount;
    u32 score;
    u32 playTime;
  };

  void initializeToSave(ReplayTypeLevel _level);
  ReplayType saveToSRAM(void);

  void loadFromSRAM(SRAMFileSystem::FilePtr *ptr);

  static void getSavedReplay(SRAMFileSystem::FilePtr *ptr, const SRAMFileSystem &sramFS, ReplayType type);

  static ReplayTypeMode getReplayTypeMode(ReplayType type) { return static_cast<ReplayTypeMode>(type & 0xf); }
  static ReplayTypeLevel getReplayTypeLevel(ReplayType type) { return static_cast<ReplayTypeLevel>(type & 0xf0); }

  KeyLog keyLog;

private:
  bool isBestScore(SRAMFileSystem::FilePtr *savedReplayPtr);
  bool isBestTime(SRAMFileSystem::FilePtr *savedReplayPtr);
  void makeNewFileAndWriteToSRAM(int saveSize, ReplayType type);

  int getRandSeed(void) { return randSeed; }
  void setRandSeed(int _randSeed);

  static ReplayType makeReplayType(ReplayTypeLevel _level, ReplayTypeMode _mode) {
    return static_cast<ReplayType>(_level | _mode);
  }

  static u8 getCurrentMissCount(void);
  static u32 getCurrentScore(void);
  static u32 getCurrentPlayTime(void);

  int randSeed;
  ReplayTypeLevel level;
};

#endif
