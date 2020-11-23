//
// Created by iMbaGong on 2020/11/13.
//

#include "PlayerVisitor.h"
#include "Player.h"

void PlayerVisitor::visit(Element *element) {
    Player* player = (Player*)element;
    std::cout<<player->getName()<<std::endl;
}