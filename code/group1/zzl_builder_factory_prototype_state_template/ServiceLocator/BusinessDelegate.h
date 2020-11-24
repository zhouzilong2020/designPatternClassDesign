#pragma once
#include"ServiceLocator.h"
#include"./Service/IService.h"

class BusinessDelegate {
private:
	IService* service=NULL;
public:
	void setServiceType(const std::string& serviceName) {
		service=ServiceLocator::getService(serviceName);
		std::cout << "Business delegate change to service " + serviceName + "." << std::endl;
	}
	void execute() {
		if (service != NULL) {
			std::cout << "Business delegate execute service." << std::endl;
			service->execute();
		}
	}
};