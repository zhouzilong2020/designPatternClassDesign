//
// Created by iMbaGong on 2020/11/12.
//

#ifndef VISITOR_SPORT_H
#define VISITOR_SPORT_H


#include <vector>
#include "Element.h"
#include "Player.h"
class Player;//超前引用问题

class Sport : public Element{
    friend class SportMemberVisitor;
    friend class SportWinnerVisitor;
public:
    Sport(const std::string &name);
    ~Sport();
    std::string getName();
    void addPlayer(Player* player);
    void competitionStart();

private:
    std::string name;
    std::vector<Player*>* players;
    std::vector<Player*>* winners;
    int playerNum;
};


#endif //VISITOR_SPORT_H
