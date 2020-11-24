#pragma once
#include"FilterManager.h"

namespace Intercepting {
	class Client
	{
	public:
		/**
	   * @brief: 新建FilterManager
	   * @param: 传入新的FilterManager
	   * @ret: 不返回值
	   */
		void setFilterManager(FilterManager filterManager);
		/**
	   * @brief: 传入希望处理的命令
	   * @param: 传入命令的字符串
	   * @ret: 不返回值
	   */
		void sendRequest(string request);
		Client() {};
	private:
		FilterManager filterManager;
	};
}


