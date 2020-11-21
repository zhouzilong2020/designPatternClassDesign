#include "SportingEvent.h"
#include "ConcreteIterator.h"
#include "ConcreteAggregate.h"

using namespace std;

int main(int argc, char *argv[])
{
    Aggregate<SportingEvent> *aggr = new ConcreteAggregate<SportingEvent>();

    vector<Athlete> athlete;

    athlete.emplace_back(Athlete(1,"狗",10,"公"));
    athlete.emplace_back(Athlete(2,"猪",3,"母"));
    athlete.emplace_back(Athlete(3,"猫",2,"母"));
    athlete.emplace_back(Athlete(4,"马",4,"公"));

    SportingEvent sport1 = SportingEvent("football",100,"lilinb",athlete);
    SportingEvent sport2 = SportingEvent("basketball",50,"lilizeinb",athlete);
    SportingEvent sport3 = SportingEvent("100meter",80,"lilitainiubi",athlete);

    aggr->pushData(sport1);
    aggr->pushData(sport2);
    aggr->pushData(sport3);

    Iterator<SportingEvent> *it = aggr->createIterator();

    for (it->first(); !it->isDone(); it->next())
    {
        it->curItem()->getAllInfo();
    }
    delete it;
    delete aggr;
}
