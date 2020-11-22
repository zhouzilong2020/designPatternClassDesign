//
// Created by  周子龙 on 2020/11/22.
//

#ifndef DESIGNPATTERN_SERVICELOCATOR_H
#define DESIGNPATTERN_SERVICELOCATOR_H

#include "./Service/IService.h"
#include "Cache.h"
#include <vector>
#include "InitialContext.h"

class ServiceLocator {
private:
    static Cache _cache;
    static InitialContext _context;
public:
    ServiceLocator() {}

    static IService *getService(std::string serviceName) {
        IService *service = _cache.getService(serviceName);
        if (service != NULL) {
            return service;
        } else {
            service = _context.lookup(serviceName);
            if (service != NULL) {
                _cache.addService(service);
                return service;
            }
        }
        return NULL;
    }

    void lookup() {

    }
};

Cache ServiceLocator::_cache;
InitialContext ServiceLocator::_context;
#endif //DESIGNPATTERN_SERVICELOCATOR_H
