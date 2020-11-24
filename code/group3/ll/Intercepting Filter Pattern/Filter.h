#pragma once
#include<iostream>
#include<string>
using namespace std;
class Filter
{
public:
	virtual void execute(string order)=0;
};

