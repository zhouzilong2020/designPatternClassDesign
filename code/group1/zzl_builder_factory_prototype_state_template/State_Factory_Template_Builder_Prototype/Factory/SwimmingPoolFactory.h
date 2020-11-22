//
// Created by  周子龙 on 2020/11/15.
//

#ifndef DESIGNPATTERN_SWIMMINGPOOLFACTORY_H
#define DESIGNPATTERN_SWIMMINGPOOLFACTORY_H

#include "IFactory.h"
#include "../Facility/SwimmingPool2020.h"

/**
 * concrete class
 * 建造游泳场馆的具体实现类，继承自IFactory
 */
class SwimmingPoolFactory : public IFactory {
public:
    /**
     * 游泳场馆的构造函数
     */
    SwimmingPoolFactory(IBuilder &builder) : IFactory(builder) {}

    /**
     * 建造的具体步骤
     */
    void buildFacility() {
        this->_facility = new SwimmingPool2020(20, 20);
        this->_builder->construct(*this->_facility);
        this->_builder->installSeat(*this->_facility);
        this->_builder->installScreen(*this->_facility);
    }
};


#endif //DESIGNPATTERN_SWIMMINGPOOLFACTORY_H
