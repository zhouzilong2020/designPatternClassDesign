#pragma once
#include <iostream>
#include "Singleton.h"
using namespace std;

//��������--����ģʽ
class Stadium :public Singleton<Stadium> {
	friend class Singleton<Stadium>;
public:
	~Stadium()
	{
		cout << "�˶����Ļ����������ֹͣ���⿪����! " << endl;
	}
	Stadium(const Stadium&) = delete;
	Stadium& operator =(const Stadium&) = delete;
	void cleanStadium();
	bool stadiumCleaned();
	void openStadium();
private:
	Stadium()
	{
		cout << "�˶��ῪĻ���������ݿ�ʼ���⿪����!" << endl;
	}
	bool stadiumCleanedFlag = false;
};

void Stadium::cleanStadium()
{
	stadiumCleanedFlag = true;
	cout << "�����ݴ�ɨ���������Կ�ʼ��������" << endl;
}

bool Stadium::stadiumCleaned()
{
	return stadiumCleanedFlag;
}

void Stadium::openStadium()
{
	if (stadiumCleaned())
	{
		cout << "�����ݿ�������С������ӿ���������ݡ���" << endl;
	}
	else
	{
		return;
	}
}