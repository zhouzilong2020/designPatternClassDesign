//
// Created by  周子龙 on 2020/11/22.
//

#ifndef DESIGNPATTERN_POOLPROXY_H
#define DESIGNPATTERN_POOLPROXY_H

#include "IPoolObject.h"

class PoolManager;

class PoolProxy {
private:
    IPoolObject *_poolObject;
    PoolManager *_poolManager;
public:
    ~PoolProxy() {
        _poolObject = NULL;
        _poolManager = NULL;
    }

    PoolProxy(IPoolObject *poolObject, PoolManager *poolManager) : _poolObject(poolObject), _poolManager(poolManager) {}

    void execute() {
        if (_poolObject) {
            _poolObject->execute();
        } else {
            std::cout << "this resource has been released, pleas reallocate one!" << std::endl;
        }
    }

    void release();
};


#endif //DESIGNPATTERN_POOLPROXY_H
