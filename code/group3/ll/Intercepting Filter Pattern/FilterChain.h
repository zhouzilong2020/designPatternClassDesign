#pragma once
#include<iostream>
#include<string>
#include "Filter.h"
#include "Target.h"
using namespace std;
class FilterChain
{
public:

	void addFilter(Filter* filter);
	void execute(string order);
	void setTarget(Target target);
	FilterChain();
private:
	Filter** List;
	Target target;
	int flag;

};

