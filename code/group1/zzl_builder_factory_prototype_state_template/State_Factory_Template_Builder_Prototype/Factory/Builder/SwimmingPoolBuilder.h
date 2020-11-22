//
// Created by  周子龙 on 2020/11/15.
//

#ifndef DESIGNPATTERN_SWIMMINGPOOLBUILDER_H
#define DESIGNPATTERN_SWIMMINGPOOLBUILDER_H

#include "IBuilder.h"

#include <iostream>

/**
 * concrete class
 * 游泳馆建造者的实现类，继承自IBuilder
 */
class SwimmingPoolBuilder : public IBuilder {
public:
    /**
     * 游泳馆建造者的构造函数
     * @param seat 安装的座椅种类，prototype传入
     * @param screen 安装的屏幕种类，prototype传入
     */
    SwimmingPoolBuilder(IComponent &seat, IComponent &screen) : IBuilder(seat, screen) {}

    /**
     * 建造基础设施。。。
     * @param facility 建造的场馆
     */
    virtual void construct(IFacility &facility) override {
        std::cout << "Constructing SwimmingPool" << std::endl;
    };

    /**
     * 安装座椅
     * @param facility 需要安装屏幕的设施
     */
    virtual void installSeat(IFacility &facility) override {
        std::cout << "Installing Seats" << std::endl;
        for (int i = 0, cnt = facility.getCapacity(); i < cnt; i++) {
            facility.addSeat(*this->_seat->clone());
        }
    };

    /**
     * 安装屏幕
     * @param facility 需要安装屏幕的设施
     */
    virtual void installScreen(IFacility &facility) override {
        std::cout << "Installing Screen" << std::endl;
        facility.addScreen(*this->_screen->clone());
    };
};

#endif //DESIGNPATTERN_SWIMMINGPOOLBUILDER_H
