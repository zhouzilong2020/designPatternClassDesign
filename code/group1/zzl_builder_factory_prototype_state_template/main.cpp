#include <iostream>

#include "Component/Seat/SlatSeat.h"
#include "Component/Screen/HRScreen.h"
#include "Factory/Builder/IBuilder.h"
#include "Facility/IFacility.h"
#include "Factory/SwimmingPoolFactory.h"
#include "Factory/Builder/SwimmingPoolBuilder.h"
#include "Facility/SwimmingPool2020.h"

using namespace std;

int main() {

    IFacility *facility;
    IBuilder *builder = new SwimmingPoolBuilder(SlatSeat::_slatSeat, HRScreen::_HRScreen);
    IFactory *factory = new SwimmingPoolFactory(*(new SwimmingPool2020(20, 20)), *builder);
    factory->buildFacility();

    facility = factory->getFacility();
    facility->hostGame();

    facility->setWinterState();
    facility->hostGame();
}
