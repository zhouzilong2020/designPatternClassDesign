#pragma once
#include "setGroup.h"
#include<iostream>
#include<string>
using namespace std;

namespace Bridge {
	class Female :public setGroup
	{
	public:
		/**
		 * @brief:�õ��ñ����������Ϣ
		 * @param: �����ݲ���
		 * @ret: ������ֵ
		 */
		void getGroup();
		Female(string race, string Age_Group);
	private:
		string race;
		string Age_Group;
	};

}
