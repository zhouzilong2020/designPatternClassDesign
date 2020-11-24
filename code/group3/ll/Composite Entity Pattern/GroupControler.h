#pragma once
#include "Group.h"

class GroupControler
{
public:
	void setInfo(string namea, string nameb);
	NameReturn getInfo();
	GroupControler();
private:
	Group* group;
};

