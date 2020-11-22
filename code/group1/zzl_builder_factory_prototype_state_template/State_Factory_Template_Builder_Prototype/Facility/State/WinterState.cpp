//
// Created by  周子龙 on 2020/11/15.
//

//
// Created by  周子龙 on 2020/11/15.
//
#include "WinterState.h"
#include "../IFacility.h"

/**
 * 冬天状态的构造函数
 * @param facility 冬天状态绑定的一个具体场馆
 */
WinterState::WinterState(IFacility &facility) : IState(facility) {}

/**
 * 准备设施，这里简单定义为先将场馆空调调整到28度，然后调用场馆自身的准备方法
 */
void WinterState::prepareFacility() {
    std::cout << "WinterState::setting A/C to 28 degree" << std::endl;
    this->_facility->prepareFacility();
}

/**
 * 举办比赛，春天夏天可能会有不同，这里简化为调用场馆自身的方法
 */
void WinterState::holdCompetition() {
    std::cout << "WinterState::";
    this->_facility->holdCompetition();
}

/**
 * 举办颁奖仪式，春天夏天可能会有不同，这里简化为调用场馆自身的方法
 */
void WinterState::holdCeremony() {
    std::cout << "WinterState::";
    this->_facility->holdCeremony();
}

/**
 * 清洁场馆，春天夏天可能会有不同，这里简化为调用场馆自身的方法
 */
void WinterState::cleanFacility() {
    std::cout << "SummerState::";
    this->_facility->cleanFacility();
}
