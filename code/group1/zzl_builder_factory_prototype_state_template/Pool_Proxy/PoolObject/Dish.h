//
// Created by  周子龙 on 2020/11/22.
//

#ifndef DESIGNPATTERN_DISH_H
#define DESIGNPATTERN_DISH_H

#include "IPoolObject.h"
#include <string>
#include <iostream>

class Dish : public IPoolObject {
private:
    std::string _foodType;

    Dish() {}

    void execute() override {
        this->serve();
        this->wash();
    }

public:
    static Dish _Dish;

    IPoolObject *clone() override {
        return new Dish();
    }

    void execute(std::string foodType) {
        this->prepareFood(foodType);
        this->execute();
    }


    void prepareFood(std::string foodType) {
        std::cout << "Dish::prepareFood()" << std::endl;
        this->_foodType = foodType;
    }

    void serve() {
        std::cout << "Dish::serve()" << std::endl;
    }

    void wash() {
        std::cout << "Dish::wash()" << std::endl;
        this->_foodType.clear();
    }

};

Dish Dish::_Dish;

#endif //DESIGNPATTERN_DISH_H
