#pragma once
#include "setGroup.h"
#include<iostream>
#include<string>
using namespace std;

namespace Bridge {
	class Male :public setGroup
	{
	public:
		/**
		 * @brief:�õ��ñ����������Ϣ
		 * @param: �����ݲ���
		 * @ret: ������ֵ
		 */
		void getGroup();
		Male(string race, string Age_Group);
	private:
		string race;
		string Age_Group;
	};
}



