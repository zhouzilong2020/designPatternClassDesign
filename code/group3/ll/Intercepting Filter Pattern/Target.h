#pragma once
#include<iostream>
#include<string>
using namespace std;

namespace Intercepting {
	class Target
	{
	public:
		/**
	   * @brief: 处理该命令
	   * @param: 传入命令的字符串
	   * @ret: 不返回值
	   */
		void execute(string order);


	};
}


