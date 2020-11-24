#pragma once
#include"FilterChain.h"

class FilterManager
{
public:
	FilterManager() {};
	FilterManager(Target target);
	void setFilter(Filter* filter);
	void filterRequest(string request);
private:
	FilterChain* chain;
};

