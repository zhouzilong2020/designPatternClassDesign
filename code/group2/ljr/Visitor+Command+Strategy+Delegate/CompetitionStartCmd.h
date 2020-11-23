//
// Created by iMbaGong on 2020/11/13.
//

#ifndef VISITOR_COMPETITIONSTARTCMD_H
#define VISITOR_COMPETITIONSTARTCMD_H


#include "Command.h"
#include "Sport.h"

class CompetitionStartCmd: public Command{
public:
    typedef void (Sport::* Action)();
    CompetitionStartCmd(Sport* _sport,Action _action);
    void execute()override;

private:
    Action action;
    Sport* sport;
};


#endif //VISITOR_COMPETITIONSTARTCMD_H
