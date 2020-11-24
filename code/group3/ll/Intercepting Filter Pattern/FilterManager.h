#pragma once
#include"FilterChain.h"


namespace Intercepting {
	class FilterManager
	{
	public:
		FilterManager() {};
		FilterManager(Target target);
		/**
	   * @brief: 增加新的Filter
	   * @param: 传入新的Filter指针
	   * @ret: 不返回值
	   */
		void setFilter(Filter* filter);
		/**
	   * @brief: 传入希望执行的命令
	   * @param: 传入命令的字符串
	   * @ret: 不返回值
	   */
		void filterRequest(string request);
	private:
		FilterChain* chain;
	};
}


