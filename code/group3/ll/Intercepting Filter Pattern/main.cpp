#include<iostream>
#include"Check_If_Ready.h"
#include"Client.h"
#include"DebugFilter.h"
using namespace std;

int main()
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
	return 0;
}