//
// Created by iMbaGong on 2020/11/13.
//

#include "CompetitionStartCmd.h"

CompetitionStartCmd::CompetitionStartCmd(Sport *_sport, CompetitionStartCmd::Action _action)
    :sport(_sport),action(_action){
}

void CompetitionStartCmd::execute() {
    (sport->*action)();
}
