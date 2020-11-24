//
// Created by iMbaGong on 2020/11/13.
//

#include "PlayerInfoVisitor.h"
#include "Player.h"

void PlayerInfoVisitor::visit(Element *element) {
    Player* player = (Player*)element;
    std::cout<<"The "<<player->getName()<<" have attend:"<<std::endl;


    for(Sport *sport:*player->sports){
        std::cout<<"\t";
        std::cout<<sport->getName()<<std::endl;
    }
}
