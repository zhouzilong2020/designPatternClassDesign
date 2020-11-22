#ifndef DESIGNPATTERN_IFACILITY_H
#define DESIGNPATTERN_IFACILITY_H


#include <list>
#include <iostream>
#include "../Component/IComponent.h"

/// 前项声明
class IState;

/**
 * Interface
 * 场馆接口
 */
class IFacility {
protected:
    /// 实现与注释见.cpp
    IFacility(int size, int capacity);

    /// 场馆的大小
    int _size;
    /// 场馆的容量， 直接决定椅子安放的数量
    int _capacity;

    /// 场馆的状态，对应春天和夏天，不同状态下场馆有不一样的表现形式
    IState *_curState;
    IState *_summerState;
    IState *_winterState;

public:
    /// 场馆内的物品， 这里以座椅和电子屏幕为例
    std::list<IComponent *> *_seat;
    IComponent *_screen;

    /// 实现与注释见.cpp
    void hostGame();

    /// 准备场馆
    virtual void prepareFacility() = 0;

    /// 开始比赛
    virtual void holdCompetition() = 0;

    /// 进行颁奖仪式
    virtual void holdCeremony() = 0;

    /// 清理场馆
    virtual void cleanFacility() = 0;

    /**
     * 设置场馆的状态为冬天
     */
    void setWinterState() {
        std::cout << "setting state to winter" << std::endl;
        _curState = this->_winterState;
    };

    /**
     * 设置场馆的状态为夏天
     */
    void setSummerState() {
        std::cout << "setting state to summer" << std::endl;
        _curState = this->_summerState;
    };

    /**
     * 得到场馆当前的状态
     * @return 返回场馆当前状态
     */
    IState *getState() { return _curState; };

    /**
     * 为场馆添加座椅
     */
    void addSeat(IComponent &seat) {
        if (this->_seat == NULL) {
            this->_seat = new std::list<IComponent *>();
        }
        this->_seat->push_back(&seat);
    }

    /**
     * 为场馆添加屏幕
     */
    void addScreen(IComponent &screen) {
        this->_screen = &screen;
    }

    /**
     * 得到场馆的容量
     * @return 返回场馆的容量
     */
    int getCapacity() { return this->_capacity; }
};

#endif