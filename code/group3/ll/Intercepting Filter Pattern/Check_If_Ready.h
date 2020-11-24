#pragma once
#include "Filter.h"

namespace Intercepting {
    class Check_If_Ready :public Filter
    {
    public:
        /**
        * @brief: 使用该过滤器预处理命令
        * @param: 传入命令的字符串
        * @ret: 不返回值
        */
        void execute(string order);
    };
}


