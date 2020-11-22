//
// Created by  周子龙 on 2020/11/15.
//

#ifndef DESIGNPATTERN_ISTATE_H
#define DESIGNPATTERN_ISTATE_H


class IFacility;

/**
 * Interface
 * 场馆状态接口
 */
class IState {
protected:
    /// 该状态所对应的场馆
    IFacility *_facility;

    /// 具体实现与注释见.cpp
    IState(IFacility &facility);

public:
    /// 虚函数，由不同状态决定不同的实现
    virtual void prepareFacility() = 0;

    /// 虚函数，由不同状态决定不同的实现
    virtual void holdCompetition() = 0;

    /// 虚函数，由不同状态决定不同的实现
    virtual void holdCeremony() = 0;

    /// 虚函数，由不同状态决定不同的实现
    virtual void cleanFacility() = 0;

};


#endif //DESIGNPATTERN_ISTATE_H
