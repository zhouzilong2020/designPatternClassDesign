#pragma once
#include "Filter.h"

namespace Intercepting {
    class Check_If_Ready :public Filter
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


