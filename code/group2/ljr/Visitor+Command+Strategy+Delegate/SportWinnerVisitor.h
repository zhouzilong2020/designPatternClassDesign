//
// Created by iMbaGong on 2020/11/13.
//

#ifndef VISITOR_SPORTWINNERVISITOR_H
#define VISITOR_SPORTWINNERVISITOR_H


#include "Element.h"

class SportWinnerVisitor: public Visitor{
public:
    void visit(Element *element) override;
};


#endif //VISITOR_SPORTWINNERVISITOR_H
