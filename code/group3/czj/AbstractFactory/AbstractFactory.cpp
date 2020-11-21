#include "AbstractFactory.h"

int main()
{
    //get IndividualEventsFactory
    AbstractFactory *IndividualEventsFactory = FactoryProducer::getFactory("IndividualEventsFactory");

    //get running event
    IndividualEvents *Running = IndividualEventsFactory->getIndividualEvent("Running");
    Running->show();

    //get swimming event
    IndividualEvents *Swimming = IndividualEventsFactory->getIndividualEvent("Swimming");
    Swimming->show();

    //get high jumping event
    IndividualEvents *HighJumping = IndividualEventsFactory->getIndividualEvent("HighJumping");
    HighJumping->show();

    //get TeamEventsFactory
    AbstractFactory *TeamEventsFactory = FactoryProducer::getFactory("TeamEventsFactory");

    //get tug of war event
    TeamEvents *TugOfWar = TeamEventsFactory->getTeamEvent("TugOfWar");
    TugOfWar->show();

    //get relay running event
    TeamEvents *RelayRunning = TeamEventsFactory->getTeamEvent("RelayRunning");
    RelayRunning->show();

    //get basketball event
    TeamEvents *Basketball = TeamEventsFactory->getTeamEvent("Basketball");
    Basketball->show();

    return 0;
}