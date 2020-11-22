//
// Created by iMbaGong on 2020/11/12.
//

#ifndef VISITOR_PLAYER_H
#define VISITOR_PLAYER_H


#include "Element.h"
#include "Sport.h"
class Sport;//超前引用问题

class Player: public Element{
    friend class PlayerInfoVisitor;
public:
    Player(const std::string &name);

    std::string getName();
    void attend(Sport* sport);
private:
    std::string name;
    std::vector<Sport*>* sports;
};


#endif //VISITOR_PLAYER_H
