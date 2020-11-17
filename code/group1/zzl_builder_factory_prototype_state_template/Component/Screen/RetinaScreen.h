//
// Created by  周子龙 on 2020/11/15.
//

#ifndef DESIGNPATTERN_RETINASCREEN_H
#define DESIGNPATTERN_RETINASCREEN_H

#include "../IScreen.h"
#include "../config/ScreenType.h"

/**
 * concrete class
 * 继承自IScreen，为视网膜屏幕的具体实现类
 */
class RetinaScreen : public IScreen {
private:
    /**
    * 视网膜屏幕的构造函数，为private，屏蔽外界直接创造，必须通过prototype进行clone
    */
    RetinaScreen() : IScreen(ScreenType::RetinaScreen, _retinaScreenCnt) {}

    /// 一个静态成员变量，为制造过的所有屏幕进行统计
    static int _retinaScreenCnt;

protected:
    /**
     * clone调用的构造函数
     * @param id 部件的id
     */
    RetinaScreen(int id) : IScreen(ScreenType::RetinaScreen, id) {};

public:
    /// 一个静态成员变量，为工厂提供一个副本
    static RetinaScreen _retinaScreen;

    /**
     * prototype方法，clone一个当前的产品，这里简单以new一个来实现
     * @return 一个根据当前部件clone的新部件
     */
    virtual IScreen *clone() override { return new RetinaScreen(_retinaScreenCnt++); };

    /**
     * 屏幕的具体展示方法
     */
    virtual void display() override {
        showInfo();
        std::cout << "RetinaScreen Initiated" << std::endl;
    }
};

/// 初始化
int RetinaScreen::_retinaScreenCnt = 0;

class ::RetinaScreen RetinaScreen::_retinaScreen;


#endif //DESIGNPATTERN_RETINASCREEN_H
