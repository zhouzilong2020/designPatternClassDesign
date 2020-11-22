#include <iostream>

//#include "Component/Seat/SlatSeat.h"
//#include "Component/Screen/HRScreen.h"
//#include "Factory/Builder/IBuilder.h"
//#include "Facility/IFacility.h"
//#include "Factory/SwimmingPoolFactory.h"
//#include "Factory/Builder/SwimmingPoolBuilder.h"

//#include "./Pool_Proxy/PoolManager/PoolManager.h"
//#include "./Pool_Proxy/PoolObject/Dish.h"
//#include "./Pool_Proxy/PoolObject/Spoon.h"

#include "./ServiceLocator/ServiceLocator.h"
#include "./ServiceLocator/Service/IService.h"

using namespace std;

int main() {
//
//    IFacility *facility;
//    IBuilder *builder = new SwimmingPoolBuilder(SlatSeat::_slatSeat, HRScreen::_HRScreen);
//    IFactory *factory = new SwimmingPoolFactory(*builder);
//    factory->buildFacility();
//
//    facility = factory->getFacility();
//
//
//    facility->hostGame();
//
//    facility->setWinterState();
//    facility->hostGame();

//    PoolManager *dishManager = new PoolManager(2, &Dish::_Dish);
//
//    PoolProxy *dish1 = dishManager->request();
//    dish1->execute();
//
//    PoolProxy *dish2 = dishManager->request();
//    dish2->execute();
//
//    dishManager->request();

    ServiceLocator *serviceLocator = new ServiceLocator();
    IService *_5GService_1 = serviceLocator->getService("FiveGService");
    _5GService_1->execute();
    IService *_5GService_2 = serviceLocator->getService("FiveGService");
    _5GService_2->execute();

}
