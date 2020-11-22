//
// Created by  周子龙 on 2020/11/15.
//

#include "../IFacility.h"
#include "IState.h"

/**
 * 场馆状态的构造函数，由于是接口类，其构造函数定义为protected
 * @param facility 与该状态绑定的设施
 */
IState::IState(IFacility &facility) : _facility(&facility) {}