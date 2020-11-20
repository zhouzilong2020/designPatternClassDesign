#pragma once
#include"IGameSection.h"

//额外关卡类
class ExtraGameSection :public IGameSection {
public:
	ExtraGameSection(IGameSection* gameSection);
	~ExtraGameSection();
	int toPass();
private:
	IGameSection* predecessorGame;
};