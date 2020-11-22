//
// Created by iMbaGong on 2020/11/13.
//

#ifndef VISITOR_ADDPLAYERCMD_H
#define VISITOR_ADDPLAYERCMD_H


#include "Command.h"
#include "Sport.h"
class AddPlayerCmd: public Command {
public:
    typedef void (Sport::* Action)(Player* name);
    AddPlayerCmd(Sport* sport, Action act);
    void execute(Player* name);
    void execute()override;

private:
    Action _action;
    Sport* _sport;

};


#endif //VISITOR_ADDPLAYERCMD_H
