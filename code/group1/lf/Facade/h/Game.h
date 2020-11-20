#pragma once
#include"../../Decorator/h/MainGameSection.h"
#include"../../Decorator/h/BonusGameSection.h"
#include"../../Decorator/h/TimeLimitedGameSection.h"

#include"GameSectionName.h"
class Game {
public:
	Game(initializer_list<GameSectionName> gameSectionNames);
	Game();
	~Game();
	void begin();
private:
	IGameSection* game;
};

