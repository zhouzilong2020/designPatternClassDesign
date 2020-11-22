//
// Created by  周子龙 on 2020/11/22.
//

#ifndef DESIGNPATTERN_SPOON_H
#define DESIGNPATTERN_SPOON_H

#include "IPoolObject.h"

#include <iostream>
#include <string>

class Spoon : public IPoolObject {
private:
    Spoon() {}

public:
    static Spoon _Spoon;

    IPoolObject *clone() override {
        return new Spoon();
    }

    void execute() override {
        this->serve();
        this->wash();
    }

    void serve() {
        std::cout << "Spoon::server()" << std::endl;
    }

    void wash() {
        std::cout << "Spoon::wash()" << std::endl;
    }

};

Spoon Spoon::_Spoon;

#endif //DESIGNPATTERN_SPOON_H
