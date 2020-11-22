//
// Created by  周子龙 on 2020/11/22.
//

#ifndef DESIGNPATTERN_ISERVICE_H
#define DESIGNPATTERN_ISERVICE_H

#include <string>

class IService {
public:
    virtual void execute() = 0;

    virtual std::string getName() = 0;
};


#endif //DESIGNPATTERN_ISERVICE_H
