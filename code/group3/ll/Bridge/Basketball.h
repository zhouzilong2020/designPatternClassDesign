#pragma once
#include "Event.h"
#include "setGroup.h"
class Basketball :public Event
{
public:
	Basketball(setGroup *Gender);
	void setGender();
private:
	setGroup* Gender;
};

