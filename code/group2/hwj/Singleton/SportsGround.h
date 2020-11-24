#pragma once
#pragma once
#include <iostream>
#include "Singleton.h"
using namespace std;

//�˶�����--����ģʽ
class SportsGround :public Singleton<SportsGround> {
	friend class Singleton<SportsGround>;
public:
	~SportsGround()
	{
		cout << "�˶����Ļ�����˶���ֹͣ���⿪����! " << endl;
	}
	SportsGround(const SportsGround&) = delete;
	SportsGround& operator =(const SportsGround&) = delete;
	void prepareSportsGround();
	bool stadiumPrepared();
	void openSportsGround();
private:
	SportsGround()
	{
		cout << "�˶��ῪĻ�����˶�����ʼ���⿪����!" << endl;
	}
	bool sportsGroundPreparedFlag = false;
};

void SportsGround::prepareSportsGround()
{
	sportsGroundPreparedFlag = true;
	cout << "�˶�����׼�����������������Կ�ʼ��������" << endl;
}

bool SportsGround::stadiumPrepared()
{
	return sportsGroundPreparedFlag;
}

void SportsGround::openSportsGround()
{
	if (stadiumPrepared())
	{
		cout << "�˶�����������С������ӿ�����˶�������" << endl;
	}
	else
	{
		return;
	}
}