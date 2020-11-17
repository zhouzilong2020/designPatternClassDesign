#ifndef I_SWIMMINGPOOL
#define I_SWIMMINGPOOL

#include "IFacility.h"
#include "../Component/IComponent.h"
#include <iostream>

/**
 * Interface
 * 游泳场馆的接口，继承Ifacility类
 */
class ISwimmingPool : public IFacility {
protected:
    /**
     * 游泳场馆的构造函数
     * @param size 场馆的大小
     * @param capacity 场馆的容量
     */
    ISwimmingPool(int size, int capacity)
            : IFacility(size, capacity) {};
public:
    /**
     * 场馆具体的实现准备设施的函数，游泳馆有取水和消毒两个特别的步骤
     */
    virtual void prepareFacility() override {
        std::cout << "SwimmingPool::prepareFacility()" << std::endl;
        std::cout << "SwimmingPool::prepareFacility::";
        getWater();
        std::cout << "SwimmingPool::prepareFacility::";
        neutralize();
    }

    /**
     * 举办比赛，积分屏幕需要先初始化
     */
    virtual void holdCompetition() override {

        this->_screen->doSomething();

        std::cout << "SwimmingPool::holdCompetition()" << std::endl;
    };

    /**
     * 举办颁奖典礼
     */
    virtual void holdCeremony() override {
        std::cout << "SwimmingPool::holdCeremony()" << std::endl;
    };


    /**
     * 清理设施，仅有消毒
     */
    virtual void cleanFacility() override {
        neutralize();
    };

    /// 具体的取水方法需要concrete class 来实现
    virtual void getWater() = 0;

    /// 具体的消毒方法需要concrete class 来实现
    virtual void neutralize() = 0;
};

#endif