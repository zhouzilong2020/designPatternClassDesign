//
// Created by iMbaGong on 2020/11/13.
//

#ifndef VISITOR_SPORTMEMBERVISITOR_H
#define VISITOR_SPORTMEMBERVISITOR_H


#include "Visitor.h"
#include "Sport.h"


class SportMemberVisitor: public Visitor {
public:
    void visit(Element *element) override;
};




#endif //VISITOR_SPORTMEMBERVISITOR_H
