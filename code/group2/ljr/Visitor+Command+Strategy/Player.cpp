//
// Created by iMbaGong on 2020/11/12.
//

#include "Player.h"


Player::Player(const std::string &name) : name(name) {
    sports = new std::vector<Sport*>();
}

std::string Player::getName() {
    return name;
}

void Player::attend(Sport *sport) {
    sports->push_back(sport);
}
