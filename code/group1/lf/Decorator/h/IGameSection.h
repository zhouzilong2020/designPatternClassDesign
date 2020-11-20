#pragma once
#include<iostream>
#include<string>
using namespace std;

//比赛关卡接口
class IGameSection {
public:
	virtual int toPass()=0;
	virtual ~IGameSection() {};
};