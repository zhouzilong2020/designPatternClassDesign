#ifndef SLAT_SEAT
#define SLAT_SEAT

#include "../IComponent.h"
#include "../ISeat.h"
#include "../config/SeatType.h"
#include <iostream>

/**
 * concrete class
 * 木条椅子的具体实现，继承自ISeat
 */
class SlatSeat : public ISeat {
private:

    /**
    * 木条椅子的构造函数，为private，屏蔽外界直接创造，必须通过prototype进行clone
    */
    SlatSeat() : ISeat(SeatType::SlatSeat, _slatSeatCnt++) {}

    /// 一个静态成员变量，为制造过的所有折叠椅子进行统计
    static int _slatSeatCnt;

protected:
    /**
     * clone调用的构造函数
     * @param id 部件的id
     */
    SlatSeat(int id) : ISeat(SeatType::SlatSeat, id) {}

public:
    /// 一个静态成员变量，为工厂提供一个副本
    static SlatSeat _slatSeat;

    /**
     * prototype方法，clone一个当前的产品，这里简单以new一个来实现
     * @return 一个根据当前部件clone的新部件
     */
    virtual ISeat *clone() override { return new SlatSeat(SlatSeat::_slatSeatCnt++); }

    /**
     * 椅子的具体坐法
     */
    virtual void seat() override {
        showInfo();
        std::cout << "SlatSeat seated" << std::endl;
    }
};

/// 初始化
int SlatSeat::_slatSeatCnt = 0;

class ::SlatSeat SlatSeat::_slatSeat;

#endif