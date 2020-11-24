#pragma once
#include"GroupControler.h"
class Client
{
public:
	void setInfo(string namea,string nameb);
	void printInfo();
	Client();
private:
	GroupControler* controler;

};

