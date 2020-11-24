#pragma once
#include<iostream>
#include<string>
#include "Filter.h"
#include "Target.h"
using namespace std;

namespace Intercepting {
	class FilterChain
	{
	public:
		/**
	   * @brief: 向FilterChain增加新的过滤器
	   * @param: 传入Filter的指针
	   * @ret: 不返回值
	   */
		void addFilter(Filter* filter);
		/**
	   * @brief: 使用该FIlterChain中的过滤器预处理命令
	   * @param: 传入命令的字符串
	   * @ret: 不返回值
	   */
		void execute(string order);
		/**
	   * @brief: 设置Target
	   * @param: 传入Target
	   * @ret: 不返回值
	   */
		void setTarget(Target target);
		FilterChain();
	private:
		Filter** List;
		Target target;
		int flag;

	};
}


