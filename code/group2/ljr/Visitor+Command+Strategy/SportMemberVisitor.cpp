//
// Created by iMbaGong on 2020/11/13.
//

#include "SportMemberVisitor.h"
#include "Sport.h"
#include "PlayerVisitor.h"

void SportMemberVisitor::visit(Element *element) {
    Sport* sport = (Sport*)element;
    std::cout<<"The players of '"<<sport->getName()<<"' are:"<<std::endl;

    PlayerVisitor* visitor = new PlayerVisitor();
    for(Player *player:*sport->players){
        std::cout<<"\t";
        player->accept(visitor);
    }
    delete visitor;
}