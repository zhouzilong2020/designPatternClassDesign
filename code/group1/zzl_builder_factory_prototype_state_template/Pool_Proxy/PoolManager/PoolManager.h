//
// Created by  周子龙 on 2020/11/22.
//

#ifndef DESIGNPATTERN_POOLMANAGER_H
#define DESIGNPATTERN_POOLMANAGER_H

#include "../PoolObject/IPoolObject.h"
#include "../PoolObject/PoolProxy.h"
#include <vector>
#include <queue>

class PoolManager {
protected:
    std::vector<IPoolObject *> _poolObjects;
    int _size;
    int _available;

public:
    PoolManager(int size, IPoolObject *poolObject) : _size(size), _available(size) {
        for (int i = 0; i < this->_size; i++) {
            this->_poolObjects.push_back(poolObject->clone());
        }
    }

    void release(IPoolObject *poolObject) {
        this->_available++;
        poolObject->release();
    }

    PoolProxy *request() {
        this->_available--;
        if (this->_available >= 0) { // 有空余
            for (int i = 0; i < _size; i++) {
                // 不是忙的
                if (!_poolObjects[i]->isBusy()) {
                    return new PoolProxy(_poolObjects[i]->occupy(), this);
                }
            }
        } else {
            // 没有空余
            std::cout << "resource have been occupied currently, please try again later" << std::endl;
            return NULL;
        }
    }

};


#endif //DESIGNPATTERN_POOLMANAGER_H
