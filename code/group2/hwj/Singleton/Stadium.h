#pragma once
#include <iostream>
#include "Singleton.h"
using namespace std;

namespace _Singleton
{
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
	private:
		Stadium()
		{
			cout << "�˶��ῪĻ���������ݿ�ʼ���⿪����!" << endl;
		}
	};
}
