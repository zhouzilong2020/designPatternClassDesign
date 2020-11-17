//
// Created by  周子龙 on 2020/11/15.
//

#ifndef DESIGNPATTERN_SUMMERSTATE_H
#define DESIGNPATTERN_SUMMERSTATE_H

#include "IState.h"
#include <iostream>

/// 前项声明
class IFacility;

/**
 * concrete class
 * 场馆对应的夏天方法
 */
class SummerState : public IState {
public:
    /// 注释以及使用见.cpp，下同
    SummerState(IFacility &facility);

    virtual void prepareFacility() override;

    virtual void holdCompetition() override;

    virtual void holdCeremony() override;

    virtual void cleanFacility() override;
};


#endif //DESIGNPATTERN_SUMMERSTATE_H
