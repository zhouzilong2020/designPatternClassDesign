#include<time.h>
#include "../h/TimeLimitedGameSection.h"

/**
 * @brief: 限时关卡构造函数，调用父类带参构造函数
 * @param: gameSection是前置关卡的指针
 * @ret:   无
 */
TimeLimitedGameSection::TimeLimitedGameSection(IGameSection * gameSection)
	:ExtraGameSection(gameSection){}

/**
 * @brief: 闯当前限时关卡函数，闯前置关卡后闯当前限时关卡
 * @param: 无
 * @ret:   返回当前总得分
 */
int TimeLimitedGameSection::toPass() {
	int currentScore = ExtraGameSection::toPass();
	cout << "Current score is " + to_string(currentScore) +"."<< endl;
	return currentScore + toPassExtra();
}

/**
 * @brief: 闯当前限时关卡函数，如果当前时间戳是奇数得分为20，否则为0
 * @param: 无
 * @ret:   返回当前限时关卡的得分
 */
int TimeLimitedGameSection::toPassExtra() {
	cout << "Passing the time limited game section ..." << endl;
	return 20*(time(0) % 2);
}
