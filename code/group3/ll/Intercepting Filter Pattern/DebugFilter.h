#pragma once
#include "Filter.h"

namespace Intercepting {
	class DebugFilter :public Filter
	{
	public:
		/**
		* @brief: ʹ�øù�����Ԥ��������
		* @param: ����������ַ���
		* @ret: ������ֵ
		*/
		void execute(string order);

	};
}


