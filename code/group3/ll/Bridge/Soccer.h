#pragma once
#include "Event.h"
#include "setGroup.h"
class Soccer :public Event
{
public:
	Soccer(setGroup* Gender);
	void setGender();
private:
	setGroup* Gender;
};

