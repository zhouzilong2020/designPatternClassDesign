#pragma once
#include"ExtraGameSection.h"

//奖励关卡类
class BonusGameSection :public ExtraGameSection {
public:
	BonusGameSection(IGameSection* gameSection);
	int toPass();
	int toPassExtra();
};