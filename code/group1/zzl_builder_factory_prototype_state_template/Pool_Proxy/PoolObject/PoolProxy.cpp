//
// Created by  周子龙 on 2020/11/22.
//

#include "PoolProxy.h"

#include "../PoolManager/PoolManager.h"

void PoolProxy::release() {
    if (_poolObject) {
        _poolManager->release(_poolObject);
        delete this;
    }else{
        std::cout << "this resource has been released, pleas reallocate one!" << std::endl;
    }
}