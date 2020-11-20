#include<random>
#include "../h/BonusGameSection.h"

/**
 * @brief: 奖励关卡构造函数，调用父类带参构造函数
 * @param: gameSection是前置关卡指针
 * @ret:   无
 */
BonusGameSection::BonusGameSection(IGameSection * gameSection)
	:ExtraGameSection(gameSection){}

/**
 * @brief: 闯关函数，闯过前置关卡后闯当前奖励关卡
 * @param: 无
 * @ret:   返回当前总得分
 */
int BonusGameSection::toPass(){
	int currentScore = ExtraGameSection::toPass();
	cout << "Current score is " + to_string(currentScore) + "." << endl;
	return currentScore + toPassExtra();
}

/**
 * @brief: 闯当前奖励关卡函数，得分为0-99的随机数
 * @param: 无
 * @ret:   返回当前关卡的得分
 */
int BonusGameSection::toPassExtra(){
	cout << "Passing the bonus game section ..." << endl;
	return rand()%100;
}
