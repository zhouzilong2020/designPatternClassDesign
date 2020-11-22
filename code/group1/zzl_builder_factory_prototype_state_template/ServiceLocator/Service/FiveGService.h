//
// Created by  周子龙 on 2020/11/22.
//

#ifndef DESIGNPATTERN_FIVEGSERVICE_H
#define DESIGNPATTERN_FIVEGSERVICE_H

#include "IService.h"
#include <iostream>
#include <string>

class FiveGService : public IService {
public:
    void execute() override {
        std::cout << "FiveGService::execute()" << std::endl;
    }

    std::string getName() override {
        return "FiveGService";
    }

};

#endif //DESIGNPATTERN_FIVEGSERVICE_H
