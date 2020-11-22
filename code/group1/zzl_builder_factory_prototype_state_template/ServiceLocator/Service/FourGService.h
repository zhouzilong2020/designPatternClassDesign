//
// Created by  周子龙 on 2020/11/22.
//

#ifndef DESIGNPATTERN_FOURGSERVICE_H
#define DESIGNPATTERN_FOURGSERVICE_H

#include "IService.h"
#include <iostream>
#include <string>

class FourGService : public IService {
public:
    void execute() override {
        std::cout << "FourGService::execute()" << std::endl;
    }

    std::string getName() override{
        return "FourGService";
    }

};


#endif //DESIGNPATTERN_FOURGSERVICE_H
