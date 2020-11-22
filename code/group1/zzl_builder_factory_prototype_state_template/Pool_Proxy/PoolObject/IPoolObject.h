//
// Created by  周子龙 on 2020/11/22.
//

#ifndef DESIGNPATTERN_IPOOLOBJECT_H
#define DESIGNPATTERN_IPOOLOBJECT_H

#include <iostream>

class IPoolObject {
protected:
    bool _busy;

    IPoolObject() : _busy(false) {}

public:
    bool isBusy() { return _busy; }

    IPoolObject *occupy() {
        std::cout << "IPoolObject::occupy()" << std::endl;
        return this;
    }

    virtual void execute() = 0;

    void release() {
        std::cout << "IPoolObject::release()" << std::endl;
        this->_busy = false;
    }

    virtual IPoolObject *clone() = 0;
};


#endif //DESIGNPATTERN_IPOOLOBJECT_H
