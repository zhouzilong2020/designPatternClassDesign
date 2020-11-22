//
// Created by iMbaGong on 2020/11/21.
//

#ifndef VISITOR_ADDEXPRESSION_H
#define VISITOR_ADDEXPRESSION_H


#include "Expression.h"

class AddExpression : public Expression{
public:
    AddExpression(Expression* _lv,Expression* _rv);
    int interpreter() override;
    Expression* lv;
    Expression* rv;
};
int AddExpression::interpreter() {
    return lv->interpreter()+rv->interpreter();
}

AddExpression::AddExpression(Expression *_lv, Expression *_rv) {
    lv = _lv;
    rv = _rv;
}


#endif //VISITOR_ADDEXPRESSION_H
