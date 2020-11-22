//
// Created by  周子龙 on 2020/11/22.
//

#ifndef DESIGNPATTERN_CACHE_H
#define DESIGNPATTERN_CACHE_H

#include <vector>
#include <string>
#include "./Service/IService.h"

class Cache {

private:
    std::vector<IService *> _services;

public:
    Cache() {};

    IService *getService(std::string serviceName) {
        for (auto service : _services) {
            if (service->getName() == serviceName) {
                return service;
            }
        }
        return NULL;
    }

    void addService(IService *newService) {
        if (this->getService(newService->getName()) != NULL) {
            return;
        } else {
            this->_services.push_back(newService);
        }
    }
};


#endif //DESIGNPATTERN_CACHE_H
