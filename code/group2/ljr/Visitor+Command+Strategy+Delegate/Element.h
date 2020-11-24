//
// Created by iMbaGong on 2020/11/12.
//

#ifndef VISITOR_ELEMENT_H
#define VISITOR_ELEMENT_H

#include "Visitor.h"
#include <iostream>
class Visitor;//超前引用问题

class Element {
public:
    void accept(Visitor* visitor);
};


#endif //VISITOR_ELEMENT_H
