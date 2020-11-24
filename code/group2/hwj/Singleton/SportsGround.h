#pragma once
#include <iostream>
#include "Singleton.h"
using namespace std;

//运动场类--单例模式
class SportsGround :public Singleton<SportsGround> {
	friend class Singleton<SportsGround>;
public:
	~SportsGround()
	{
		cout << "运动会闭幕啦！运动场停止对外开放啦! " << endl;
	}
	SportsGround(const SportsGround&) = delete;
	SportsGround& operator =(const SportsGround&) = delete;
	void prepareSportsGround();
	bool stadiumPrepared();
	void openSportsGround();
private:
	SportsGround()
	{
		cout << "运动会开幕啦！运动场开始对外开放啦!" << endl;
	}
	bool sportsGroundPreparedFlag = false;
};

void SportsGround::prepareSportsGround()
{
	sportsGroundPreparedFlag = true;
	cout << "运动场的准备工作做完啦！可以开始比赛啦！" << endl;
}

bool SportsGround::stadiumPrepared()
{
	return sportsGroundPreparedFlag;
}

void SportsGround::openSportsGround()
{
	if (stadiumPrepared())
	{
		cout << "运动场开放啦！小动物们涌入了运动场……" << endl;
	}
	else
	{
		return;
	}
}