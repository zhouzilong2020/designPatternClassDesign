#pragma once
#include"FilterManager.h"
class Client
{
public:
	void setFilterManager(FilterManager filterManager);
	void sendRequest(string request);
	Client() {};
private:
	FilterManager filterManager;
};

