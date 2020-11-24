#pragma once
#include"FilterManager.h"

namespace Intercepting {
	class Client
	{
	public:
		/**
	   * @brief: �½�FilterManager
	   * @param: �����µ�FilterManager
	   * @ret: ������ֵ
	   */
		void setFilterManager(FilterManager filterManager);
		/**
	   * @brief: ����ϣ�����������
	   * @param: ����������ַ���
	   * @ret: ������ֵ
	   */
		void sendRequest(string request);
		Client() {};
	private:
		FilterManager filterManager;
	};
}


