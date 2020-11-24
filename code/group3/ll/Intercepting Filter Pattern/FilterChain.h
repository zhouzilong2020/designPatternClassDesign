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
	   * @brief: ��FilterChain�����µĹ�����
	   * @param: ����Filter��ָ��
	   * @ret: ������ֵ
	   */
		void addFilter(Filter* filter);
		/**
	   * @brief: ʹ�ø�FIlterChain�еĹ�����Ԥ��������
	   * @param: ����������ַ���
	   * @ret: ������ֵ
	   */
		void execute(string order);
		/**
	   * @brief: ����Target
	   * @param: ����Target
	   * @ret: ������ֵ
	   */
		void setTarget(Target target);
		FilterChain();
	private:
		Filter** List;
		Target target;
		int flag;

	};
}


