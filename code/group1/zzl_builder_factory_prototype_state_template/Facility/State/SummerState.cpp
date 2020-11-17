//
// Created by  周子龙 on 2020/11/15.
//
#include "SummerState.h"
#include "../IFacility.h"

/**
 * 夏天状态的构造函数
 * @param facility 夏天状态绑定的一个具体场馆
 */
SummerState::SummerState(IFacility &facility) : IState(facility) {};

/**
 * 准备设施，这里简单定义为先将场馆空调调整到26度，然后调用场馆自身的准备方法
 */
void SummerState::prepareFacility() {
    std::cout << "SummerState::setting A/C to 26 degree" << std::endl;
    this->_facility->prepareFacility();
}

/**
 * 举办比赛，春天夏天可能会有不同，这里简化为调用场馆自身的方法
 */
void SummerState::holdCompetition() {
    std::cout << "SummerState::";
    this->_facility->holdCompetition();
}

/**
 * 举办颁奖仪式，春天夏天可能会有不同，这里简化为调用场馆自身的方法
 */
void SummerState::holdCeremony() {
    std::cout << "SummerState::";
    this->_facility->holdCeremony();
}

/**
 * 清洁场馆，春天夏天可能会有不同，这里简化为调用场馆自身的方法
 */
void SummerState::cleanFacility() {
    std::cout << "SummerState::";
    this->_facility->cleanFacility();
}