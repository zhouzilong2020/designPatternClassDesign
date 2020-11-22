//
// Created by iMbaGong on 2020/11/21.
//

#ifndef VISITOR_AVREXPRESSION_H
#define VISITOR_AVREXPRESSION_H


#include "Expression.h"

class AvrExpression : public Expression{
public:
    int interpreter() override;
    AvrExpression(Expression* _arg1,Expression* _arg2,Expression* _arg3);


    Expression* arg1;Expression* arg2;Expression* arg3;
};

AvrExpression::AvrExpression(Expression* _arg1, Expression *_arg2, Expression *_arg3) {
    arg1 = _arg1;
    arg2 = _arg2;
    arg3 = _arg3;
}

int AvrExpression::interpreter() {

    return (arg1->interpreter()+arg2->interpreter()+arg3->interpreter())/3;
}


#endif //VISITOR_AVREXPRESSION_H
