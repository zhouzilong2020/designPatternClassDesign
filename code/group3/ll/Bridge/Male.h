#pragma once
#include "setGroup.h"
#include<iostream>
#include<string>
using namespace std;
class Male :public setGroup
{
public:
	void getGroup();
	Male(string race,string Age_Group);
private:
	string race;
	string Age_Group;
};

