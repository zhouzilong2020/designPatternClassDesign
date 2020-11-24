#pragma once
#include <iostream>
#include "Singleton.h"
using namespace std;

namespace _Singleton
{
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
	private:
		SportsGround()
		{
			cout << "运动会开幕啦！运动场开始对外开放啦!" << endl;
		}
	};
}