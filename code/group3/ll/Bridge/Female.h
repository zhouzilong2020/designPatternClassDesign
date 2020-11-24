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
		 * @brief:得到该比赛的组别信息
		 * @param: 不传递参数
		 * @ret: 不返回值
		 */
		void getGroup();
		Female(string race, string Age_Group);
	private:
		string race;
		string Age_Group;
	};

}
