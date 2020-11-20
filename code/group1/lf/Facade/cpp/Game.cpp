#include"../h/Game.h"

/**
 * @brief: 有额外关卡的比赛构造函数
 * @param: gameSectionNames是额外关卡的名字枚举列表
 * @ret:   无
 */
Game::Game(initializer_list<GameSectionName> gameSectionNames) {
	game = new MainGameSection();
	for (GameSectionName gameSectionName : gameSectionNames) {
		switch (gameSectionName) {
		case GameSectionName::TimeLimitedGameSection:
			game = new TimeLimitedGameSection(game);
			break;
		case GameSectionName::BonusGameSection:
			game = new BonusGameSection(game);
			break;
		default:
			break;
		}
	}
}

/**
 * @brief: 无额外关卡的比赛构造函数
 * @param: 无
 * @ret:   无
 */
Game::Game() {
	game = new MainGameSection();
}

/**
 * @brief: 比赛析构函数，析构关卡指针
 * @param: 无
 * @ret:   无
 */
Game::~Game(){
	delete game;
}

/**
 * @brief: 开始比赛函数，输出最终得分
 * @param: 无
 * @ret:   无
 */
void Game::begin() {
	cout << "Final score is " + to_string(game->toPass()) + "." << endl;
}