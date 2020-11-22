#ifndef SWIMMINGPOOL_2020
#define SWIMMINGPOOL_2020

#include "ISwimmingPool.h"
#include <iostream>

/**
 * concrete class
 * 继承ISwimmingPool
 */
class SwimmingPool2020 : public ISwimmingPool {

public:
    /**
     * 2020年游泳运动馆的构造函数
     * @param size 场馆的大小
     * @param capacity 场馆的容量
     */
    SwimmingPool2020(int size, int capacity)
            : ISwimmingPool(size, capacity) {};

    /**
     * 为场馆输水
     */
    virtual void getWater() override {
        std::cout << "SwimmingPool2020::getWater()" << std::endl;
    };

    /**
     * 消毒
     */
    virtual void neutralize() override {
        std::cout << "SwimmingPool2020::neutralize()" << std::endl;
    };

};

#endif