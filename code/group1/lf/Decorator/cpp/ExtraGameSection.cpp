#include"../h/ExtraGameSection.h"

/**
 * @brief: 额外关卡构造函数
 * @param: gameSection是前置关卡指针
 * @ret:   无
 */
ExtraGameSection::ExtraGameSection(IGameSection* gameSection) {
	predecessorGame = gameSection;
}

/**
 * @brief: 额外关卡析构函数，析构前置关卡指针
 * @param: 无
 * @ret:   无
 */
ExtraGameSection::~ExtraGameSection(){
	delete predecessorGame;
}

/**
 * @brief: 闯前置关卡函数
 * @param: 无
 * @ret:   返回前置关卡的得分
 */
int ExtraGameSection::toPass() {
	return predecessorGame->toPass();
}