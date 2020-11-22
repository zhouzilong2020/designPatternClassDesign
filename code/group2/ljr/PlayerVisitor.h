//
// Created by iMbaGong on 2020/11/13.
//

#ifndef VISITOR_PLAYERVISITOR_H
#define VISITOR_PLAYERVISITOR_H


#include "Visitor.h"

class PlayerVisitor: public Visitor {
public:
    void visit(Element *element) override;
};


#endif //VISITOR_PLAYERVISITOR_H
