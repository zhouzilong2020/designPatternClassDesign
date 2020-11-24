#pragma once
#include "setGroup.h"
#include<iostream>
#include<string>
using namespace std;
class Female :public setGroup
{
public:
	void getGroup();
	Female(string race, string Age_Group);
private:
	string race;
	string Age_Group;
};
