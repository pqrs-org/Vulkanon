#ifndef MENU_TITLE_HPP
#define MENU_TITLE_HPP

#include "main.hpp"
#include "fonthandler.hpp"

class MenuTitle {
public:
  enum GameMode {
    GAMEMODE_PLAY_LEVEL0 = 0,
    GAMEMODE_PLAY_LEVEL1,
    GAMEMODE_PLAY_LEVEL2,
    GAMEMODE_PLAY_LEVEL3,
    GAMEMODE_VIEW_REPLAY,
    GAMEMODE_CREDITS,
    END_OF_GAMEMODE,
  };

  void doLoop(void);
  GameMode getGameMode(void) {
    return static_cast<GameMode>(selectedIndex);
  }
  void resetPos(void) {
    selectedIndex = 0;
  }

private:
  void drawAllText(void);
  void setupFont(void);

  int selectedIndex;

  FontHandler::StringInfo si_selectMode;
  FontHandler::StringInfo si_play_L0;
  FontHandler::StringInfo si_play_L1;
  FontHandler::StringInfo si_play_L2;
  FontHandler::StringInfo si_play_L3;
  FontHandler::StringInfo si_viewReplay;
  FontHandler::StringInfo si_credits;
};

#endif
