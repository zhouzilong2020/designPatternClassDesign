#pragma once
#include<iostream>
#include"Check_If_Ready.h"
#include"Client.h"
#include"DebugFilter.h"
using namespace std;

namespace Intercepting {
    void run()
    {
        Target target;
        FilterManager filterManager(target);
        Check_If_Ready  check;
        DebugFilter  debug;


        filterManager.setFilter(&check);
        filterManager.setFilter(&debug);

        Client client;
        client.setFilterManager(filterManager);
        client.sendRequest("Full preparation");
    }
}
