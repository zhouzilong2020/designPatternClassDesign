//
// Created by  周子龙 on 2020/11/15.
//

#include "State/IState.h"
#include "State/WinterState.h"
#include "State/SummerState.h"

#include "IFacility.h"

/**
 * Factory
 * 实例化一个设施，由于IFacility是一个接口，其构造函数为protected
 * 在该构造函数中，初始化设施的状态，并将当前状态赋予为夏天
 * @param size 设施的大小，eg：10-100
 * @param capacity 设施能够容纳的人数，这将作为设施内安装椅子数量的依据
 */
IFacility::IFacility(int size, int capacity) : _size(size), _capacity(capacity) {
    this->_summerState = new SummerState(*this);
    this->_winterState = new WinterState(*this);
    this->_curState = this->_summerState;
}

/**
 * Template Method
 * 定义一个设施的的基本抽象方法，下分为四个具体步骤，由concrete class提供实现
 */
void IFacility::hostGame() {
    this->_curState->prepareFacility();
    this->_curState->holdCompetition();
    this->_curState->holdCeremony();
    this->_curState->cleanFacility();
}

int fun(int a, int b){
    return 1;
}