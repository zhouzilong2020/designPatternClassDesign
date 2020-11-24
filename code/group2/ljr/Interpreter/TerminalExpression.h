//
// Created by iMbaGong on 2020/11/21.
//

#ifndef VISITOR_TERMINALEXPRESSION_H
#define VISITOR_TERMINALEXPRESSION_H


#include "Expression.h"

class TerminalExpression: public Expression {
public:
    int interpreter() override;
    TerminalExpression(int v);
    TerminalExpression(){};
private:
    int data;

};
int TerminalExpression::interpreter() {
    return data;
}

TerminalExpression::TerminalExpression(int v) {
    data = v;
}


#endif //VISITOR_TERMINALEXPRESSION_H
