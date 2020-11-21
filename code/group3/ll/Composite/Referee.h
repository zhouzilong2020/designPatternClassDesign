#pragma once
#include "Component.h"
#include<iostream>
using namespace std;

class Referee :public Component
{
public:
	Referee(string name, string race, string gender, int age);
	void getChild();
	string getName();
	string name;
private:
	
	string race;
	string gender;
	int age;
	void add(Component* Comp);
	void remove(string name);
};

