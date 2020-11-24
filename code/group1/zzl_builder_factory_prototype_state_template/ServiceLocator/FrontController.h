#pragma once
#include"BusinessDelegate.h"
class FrontController{
private:
	BusinessDelegate* businessDelegate;
	bool isAuthenticUser() {
		std::cout << "User authority check succeed." << std::endl;
		return true;
	}
	void trackRequest(std::string request) {
		std::cout << "User requested " + request + "." << std::endl;
	}
public:
	FrontController() {
		businessDelegate = new BusinessDelegate();
	}
	void dispatchRequest(std::string request) {
		trackRequest(request);
		if (isAuthenticUser()) {
			businessDelegate->setServiceType(request);
			businessDelegate->execute();
		}
	}
};