#pragma once
#include"ExtraGameSection.h"

//限时关卡类
class TimeLimitedGameSection :public ExtraGameSection {
public:
	TimeLimitedGameSection(IGameSection* gameSection);
	int toPass();
	int toPassExtra();
};