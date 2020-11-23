//
// Created by iMbaGong on 2020/11/13.
//

#include "SportWinnerVisitor.h"
#include "Sport.h"
#include "PlayerVisitor.h"

void SportWinnerVisitor::visit(Element *element) {
    Sport* sport = (Sport*)element;
    if(sport->winners->empty()){
        std::cout<<"No winner for '"<<sport->getName()<<"' now"<<std::endl;
        return;
    }
    std::cout<<"The winner of '"<<sport->getName()<<"' are:"<<std::endl;

    PlayerVisitor* visitor = new PlayerVisitor();
    for(Player *player:*sport->winners){
        std::cout<<"\t";
        player->accept(visitor);
    }
    delete visitor;
}
