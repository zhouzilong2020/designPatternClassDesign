//
// Created by  周子龙 on 2020/11/22.
//

#ifndef DESIGNPATTERN_INITIALCONTEXT_H
#define DESIGNPATTERN_INITIALCONTEXT_H

#include "Service/IService.h"
#include "Service/FiveGService.h"
#include "Service/FourGService.h"
#include <string>

class InitialContext {
public:
    IService *lookup(std::string serviceName) {
        if (serviceName == "FiveGService") {
            std::cout << "InitialContext::lookup()::Looking up and creating a new 555GService" << std::endl;
            return new FiveGService();
        } else if (serviceName == "FourGService") {
            std::cout << "InitialContext::lookup()::Looking up and creating a new 444GService" << std::endl;
            return new FourGService();
        }
        return NULL;
    }
};

#endif //DESIGNPATTERN_INITIALCONTEXT_H
