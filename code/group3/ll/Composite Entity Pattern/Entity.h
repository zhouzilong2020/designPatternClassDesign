#pragma once
#include "Client.h"
#include<iostream>

using namespace std;

namespace Entity {
    void run()
    {
        Client* client = new Client();
        client->setInfo("Sam", "Tom");
        client->printInfo();
        client->setInfo("Stephon", "Joe");
        client->printInfo();

    }
}