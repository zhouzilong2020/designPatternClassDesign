#pragma once
#include"FilterChain.h"


namespace Intercepting {
	class FilterManager
	{
	public:
		FilterManager() {};
		FilterManager(Target target);
		/**
	   * @brief: �����µ�Filter
	   * @param: �����µ�Filterָ��
	   * @ret: ������ֵ
	   */
		void setFilter(Filter* filter);
		/**
	   * @brief: ����ϣ��ִ�е�����
	   * @param: ����������ַ���
	   * @ret: ������ֵ
	   */
		void filterRequest(string request);
	private:
		FilterChain* chain;
	};
}


