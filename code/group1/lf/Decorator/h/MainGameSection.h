#pragma once
#include"IGameSection.h"

//主要关卡类
class MainGameSection :public IGameSection {
public:
	int toPass();
};