#pragma once
#include<iostream>
#include "Component.h"
#include<string>
using namespace std;

class Candidates : public Component
{
public:
	Candidates();
	void add(Component* Comp) ;
	void remove(string name) ;
	void getChild() ;
private:
	Component** pList;
	string getName();
	int flag;
};

