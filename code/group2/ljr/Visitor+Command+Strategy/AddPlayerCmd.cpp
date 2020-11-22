//
// Created by iMbaGong on 2020/11/13.
//

#include "AddPlayerCmd.h"

AddPlayerCmd::AddPlayerCmd(Sport *sport, AddPlayerCmd::Action act): _sport(sport), _action(act){
}

void AddPlayerCmd::execute(Player* name) {
    (_sport->*_action)(name);
}

void AddPlayerCmd::execute() {

}




