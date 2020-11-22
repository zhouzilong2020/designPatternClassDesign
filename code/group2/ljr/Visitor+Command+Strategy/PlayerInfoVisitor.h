//
// Created by iMbaGong on 2020/11/13.
//

#ifndef VISITOR_PLAYERINFOVISITOR_H
#define VISITOR_PLAYERINFOVISITOR_H


#include "Visitor.h"

class PlayerInfoVisitor: public Visitor{
public:
    void visit(Element *element) override;
};


#endif //VISITOR_PLAYERINFOVISITOR_H
