#pragma once
#include <iostream>
#include "Singleton.h"
using namespace std;

namespace _Singleton
{
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
	private:
		SportsGround()
		{
			cout << "�˶��ῪĻ�����˶�����ʼ���⿪����!" << endl;
		}
	};
}