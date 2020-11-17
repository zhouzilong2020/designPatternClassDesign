//
// Created by  周子龙 on 2020/11/15.
//

#ifndef DESIGNPATTERN_ISCREEN_H
#define DESIGNPATTERN_ISCREEN_H

#include "config/ScreenType.h"
#include "config/ComponentType.h"
#include "IComponent.h"
#include <iostream>

/**
 * Interface
 * 继承自IComponent，为一类部件的接口
 */
class IScreen : public IComponent {

protected:
    /// 屏幕的种类
    ScreenType _screenType;

    /**
     * 屏幕的构造函数
     * @param screenType 屏幕的种类
     * @param id 屏幕的id
     */
    IScreen(ScreenType screenType, int id) : IComponent(ComponentType::Screen, id), _screenType(screenType) {};
public:

    /**
     * 展示屏幕的具体信息
     */
    virtual void showInfo() {
        std::cout << "ComponentType:" << this->_componentType << " Style:" << this->_screenType << " No." << this->_id
                  << std::endl;
    };

    /**
     * 屏幕的主要功能就是display，不同类型的屏幕可能会有不同的display方法，需要concrete class实现
     */
    virtual void doSomething() {
        display();
    };

    /// 屏幕展示的方法，由不同的屏幕的concrete class实现
    virtual void display() = 0;
};

#endif //DESIGNPATTERN_ISCREEN_H
