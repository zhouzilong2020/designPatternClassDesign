#ifndef FOLD_SEAT
#define FOLD_SEAT

#include "../IComponent.h"
#include "../ISeat.h"
#include <iostream>

/**
 * concrete class
 * 折叠椅子的具体实现，继承自ISeat
 */
class FoldSeat : public ISeat {
private:
    /**
    * 折叠椅子的构造函数，为private，屏蔽外界直接创造，必须通过prototype进行clone
    */
    FoldSeat() : ISeat(SeatType::FoldSeat, _foldSeatCnt) {}

    /// 一个静态成员变量，为制造过的所有折叠椅子进行统计
    static int _foldSeatCnt;

protected:
    /**
     * clone调用的构造函数
     * @param id 部件的id
     */
    FoldSeat(int id) : ISeat(SeatType::FoldSeat, id) {};

public:
    /// 一个静态成员变量，为工厂提供一个副本
    static FoldSeat _foldSeat;

    /**
     * prototype方法，clone一个当前的产品，这里简单以new一个来实现
     * @return 一个根据当前部件clone的新部件
     */
    virtual ISeat *clone() override { return new FoldSeat(_foldSeatCnt++); };

    /**
     * 椅子的具体坐法
     */
    virtual void seat() override {
        showInfo();
        std::cout << "FoldSeat seated" << std::endl;
    }
};

/// 初始化
int FoldSeat::_foldSeatCnt = 0;

class ::FoldSeat FoldSeat::_foldSeat;

#endif