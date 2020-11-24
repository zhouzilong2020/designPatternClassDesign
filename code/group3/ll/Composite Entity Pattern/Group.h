#pragma once
#include "CompetitorA.h"
#include "CompetitorB.h"
#include<iostream>
using namespace std;

class NameReturn
{
public:
	string namea;
	string nameb;
	void setNames(string namea, string nameb);
};

class Group
{
public:
	void setInfo(string namea,string nameb);
	NameReturn getInfo();
	Group();
private:

	CompetitorA* A;
	CompetitorB* B;
	NameReturn* result;
};

