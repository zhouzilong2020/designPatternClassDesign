#include"./Decorator/h/MainGameSection.h"
#include"./Decorator/h/BonusGameSection.h"
#include"./Decorator/h/TimeLimitedGameSection.h"

#include"./Facade/h/Game.h"
int main() {
	//创建比赛
	Game* game = new Game({
		GameSectionName::TimeLimitedGameSection,
		GameSectionName::BonusGameSection,
		GameSectionName::BonusGameSection
		});
	game->begin();
	delete game;
}