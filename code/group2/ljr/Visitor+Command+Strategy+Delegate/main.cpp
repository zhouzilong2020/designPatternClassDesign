#include <iostream>
#include "Sport.h"
#include "SportMemberVisitor.h"
#include "SportWinnerVisitor.h"
#include "PlayerInfoVisitor.h"
#include "AddPlayerCmd.h"
#include "CompetitionStartCmd.h"


int main() {
    Sport* badminton = new Sport("Badminton");
    Sport* tennis = new Sport("Tennis");
    Player* cat = new Player("Cat");
    Player* lion = new Player("Lion");
    Player* tiger = new Player("Tiger");

    //********************test Command**********************//
    AddPlayerCmd* addPlayerCmd1 = new AddPlayerCmd(badminton,&Sport::addPlayer);
    addPlayerCmd1->execute(tiger);
    addPlayerCmd1->execute(lion);
    AddPlayerCmd* addPlayerCmd2 = new AddPlayerCmd(tennis,&Sport::addPlayer);
    addPlayerCmd2->execute(tiger);
    addPlayerCmd2->execute(cat);
    CompetitionStartCmd* competitionStartCmd = new CompetitionStartCmd(badminton,&Sport::competitionStart);
    competitionStartCmd->execute();

    //********************test Visitor+Strategy**********************//
    badminton->accept(new SportMemberVisitor());
    badminton->accept(new SportWinnerVisitor());
    cat->accept(new PlayerInfoVisitor());
    lion->accept(new PlayerInfoVisitor());
    tiger->accept(new PlayerInfoVisitor());

    //********************test Delegate**********************//
    lion->setDelegator(cat);
    lion->attendCompetition();
    return 0;
}
