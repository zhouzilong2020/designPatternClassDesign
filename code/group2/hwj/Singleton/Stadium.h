#pragma once
#include <iostream>
#include "Singleton.h"
using namespace std;

//体育馆类--单例模式
class Stadium :public Singleton<Stadium> {
	friend class Singleton<Stadium>;
public:
	~Stadium()
	{
		cout << "运动会闭幕啦！体育馆停止对外开放啦! " << endl;
	}
	Stadium(const Stadium&) = delete;
	Stadium& operator =(const Stadium&) = delete;
	void cleanStadium();
	bool stadiumCleaned();
	void openStadium();
private:
	Stadium()
	{
		cout << "运动会开幕啦！体育馆开始对外开放啦!" << endl;
	}
	bool stadiumCleanedFlag = false;
};

void Stadium::cleanStadium()
{
	stadiumCleanedFlag = true;
	cout << "体育馆打扫完啦！可以开始比赛啦！" << endl;
}

bool Stadium::stadiumCleaned()
{
	return stadiumCleanedFlag;
}

void Stadium::openStadium()
{
	if (stadiumCleaned())
	{
		cout << "体育馆开门啦！小动物们涌入了体育馆……" << endl;
	}
	else
	{
		return;
	}
}