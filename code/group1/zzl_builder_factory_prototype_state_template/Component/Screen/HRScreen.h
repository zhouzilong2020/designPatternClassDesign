//
// Created by  周子龙 on 2020/11/15.
//

#ifndef DESIGNPATTERN_HRSCREEN_H
#define DESIGNPATTERN_HRSCREEN_H

#include "../IScreen.h"
#include "../config/ScreenType.h"

/**
 * concrete class
 * 继承自IScreen，为高清屏幕的具体实现类
 */
class HRScreen : public IScreen {
private:
    /**
     * 高清屏幕的构造函数，为private，屏蔽外界直接创造，必须通过prototype进行clone
     */
    HRScreen() : IScreen(ScreenType::HRScreen, _HRScreenCnt) {}

    /// 一个静态成员变量，为制造过的所有屏幕进行统计
    static int _HRScreenCnt;

protected:
    /**
     * clone调用的构造函数
     * @param id 部件的id
     */
    HRScreen(int id) : IScreen(ScreenType::HRScreen, id) {};

public:
    /// 一个静态成员变量，为工厂提供一个副本
    static HRScreen _HRScreen;

    /**
     * prototype方法，clone一个当前的产品，这里简单以new一个来实现
     * @return 一个根据当前部件clone的新部件
     */
    virtual IScreen *clone() override { return new HRScreen(_HRScreenCnt++); };

    /**
     * 屏幕的具体展示方法
     */
    virtual void display() override {
        showInfo();
        std::cout << "HRScreen Initiated" << std::endl;
    }
};

/// 初始化
int HRScreen::_HRScreenCnt = 0;

class ::HRScreen HRScreen::_HRScreen;


#endif //DESIGNPATTERN_HRSCREEN_H
