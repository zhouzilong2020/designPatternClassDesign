//
// Created by iMbaGong on 2020/11/12.
//

#ifndef VISITOR_VISITOR_H
#define VISITOR_VISITOR_H


#include "Element.h"
class Element;//超前引用问题

class Visitor {
public:
    virtual void visit(Element* element)=0;
};


#endif //VISITOR_VISITOR_H
