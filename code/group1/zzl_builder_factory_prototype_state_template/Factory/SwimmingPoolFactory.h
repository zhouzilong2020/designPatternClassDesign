//
// Created by  周子龙 on 2020/11/15.
//

#ifndef DESIGNPATTERN_SWIMMINGPOOLFACTORY_H
#define DESIGNPATTERN_SWIMMINGPOOLFACTORY_H

#include "IFactory.h"
#include "../Component/Seat/FoldSeat.h"
#include "../Component/Screen/HRScreen.h"

/**
 * concrete class
 * 建造游泳场馆的具体实现类，继承自IFactory
 */
class SwimmingPoolFactory : public IFactory {
private:

public:
    /**
     * 游泳场馆的构造函数
     * @param facility 建造的游泳场馆的种类
     * @param builder 建造过程中的builder
     */
    SwimmingPoolFactory(IFacility &facility, IBuilder &builder) : IFactory(facility, builder) {}

    /**
     * 建造的具体步骤
     */
    void buildFacility() {
        this->_builder->construct(*this->_facility);
        this->_builder->installSeat(*this->_facility);
        this->_builder->installScreen(*this->_facility);
    }
};


#endif //DESIGNPATTERN_SWIMMINGPOOLFACTORY_H
