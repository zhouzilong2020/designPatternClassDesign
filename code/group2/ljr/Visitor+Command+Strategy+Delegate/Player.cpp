//
// Created by iMbaGong on 2020/11/12.
//

#include "Player.h"


Player::Player(const std::string &name) : name(name) {
    sports = new std::vector<Sport*>();
    delegator = nullptr;
}

std::string Player::getName() {
    return name;
}

void Player::attend(Sport *sport) {
    sports->push_back(sport);
}

void Player::attendCompetition() {
    if(delegator!= nullptr)
        delegator->attendCompetition();
    else
        std::cout<<name<<" attend the competition."<<std::endl;
}

void Player::setDelegator(SportDelegator *_delegator) {
    this->delegator = _delegator;
}
