#include "Client.h"
#include<iostream>

using namespace std;

int main()
{
    Client* client = new Client();
    client->setInfo("Sam", "Tom");
    client->printInfo();
    client->setInfo("Stephon", "Joe");
    client->printInfo();
	return 0;
}