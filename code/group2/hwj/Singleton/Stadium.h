#pragma once
#include <iostream>
#include "Singleton.h"
using namespace std;

namespace _Singleton
{
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
	private:
		Stadium()
		{
			cout << "运动会开幕啦！体育馆开始对外开放啦!" << endl;
		}
	};
}
