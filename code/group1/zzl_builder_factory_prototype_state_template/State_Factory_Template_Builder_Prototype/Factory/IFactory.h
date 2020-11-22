//
// Created by  周子龙 on 2020/11/15.
//

#ifndef DESIGNPATTERN_IFACTORY_H
#define DESIGNPATTERN_IFACTORY_H

#include "../Facility/IFacility.h"
#include "Builder/IBuilder.h"

/**
 * Interface
 * 工厂的接口，提供工厂的template method
 */
class IFactory {
protected:
    /// 工厂所建造的场馆
    IFacility *_facility;
    /// 建造场馆所需要的builder
    IBuilder *_builder;

    /**
     * 工厂接口的构造函数
     */
    IFactory(IBuilder &builder) : _builder(&builder) {}

public:
    /// 虚函数，如何建造一个场馆需要具体类来实现
    virtual void buildFacility() = 0;

    /// 得到建造完成的设施
    virtual IFacility *getFacility() { return this->_facility; };
};


#endif //DESIGNPATTERN_IFACTORY_H
