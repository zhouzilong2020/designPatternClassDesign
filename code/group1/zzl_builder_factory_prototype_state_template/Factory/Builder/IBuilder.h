//
// Created by  周子龙 on 2020/11/15.
//

#ifndef DESIGNPATTERN_IBUILDER_H
#define DESIGNPATTERN_IBUILDER_H

#include "../../Component/IComponent.h"
#include "../../Facility/IFacility.h"

/**
 * Interface
 * 建造者接口，为场馆提供安装部件服务
 */
class IBuilder {
protected:
    /// 安装的座椅
    IComponent *_seat;
    /// 安装的屏幕
    IComponent *_screen;

    /**
     * 建造者构造函数
     * @param seat 安装的座椅
     * @param screen 安装的屏幕
     */
    IBuilder(IComponent &seat, IComponent &screen) : _seat(&seat), _screen(&screen) {}

public:
    /// 虚函数，具体的建造过程需要concrete class 来实现
    virtual void construct(IFacility &facility) = 0;

    virtual void installSeat(IFacility &facility) = 0;

    virtual void installScreen(IFacility &facility) = 0;
};


#endif //DESIGNPATTERN_IBUILDER_H
