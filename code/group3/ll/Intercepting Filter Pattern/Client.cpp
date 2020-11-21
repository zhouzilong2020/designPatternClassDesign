#include "Client.h"


void Client::setFilterManager(FilterManager filterManager)
{
	this->filterManager= filterManager;
}

void Client::sendRequest(string request) {
	filterManager.filterRequest(request);
}