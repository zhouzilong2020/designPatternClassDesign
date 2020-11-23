//
// Created by iMbaGong on 2020/11/12.
//

#include "Sport.h"



Sport::Sport(const std::string &name) : name(name) {
    playerNum = 0;
    players = new std::vector<Player*>();
    winners = new std::vector<Player*>();
}
Sport::~Sport() {
    delete[] players;
}
std::string Sport::getName() {
    return name;
}

void Sport::addPlayer(Player *player) {
    players->push_back(player);
    player->attend(this);
    playerNum++;
}
void Sport::competitionStart() {
     int winnerNum = playerNum/2;
     std::vector<Player*>* tmp = players;
     if(!winners->empty()){
         winnerNum = winners->size()/2;
         tmp = new std::vector<Player*>(*winners);
         winners->clear();
     }


     while(winnerNum>0){
         for(Player* player:*tmp){
             if(random()%3-1){
                     winners->push_back(player);
                 winnerNum--;
             }
         }
     }



}