#include "Client.h"


Client::Client()
{
	controler = new GroupControler();
}

void Client::setInfo(string namea, string nameb)
{
	controler->setInfo(namea, nameb);
}

void Client::printInfo()
{
	NameReturn result = controler->getInfo();
	cout << "Name of CompetitorA:    " << result.namea << endl;
	cout << "Name of CompetitorB:    " << result.nameb<<endl;
}