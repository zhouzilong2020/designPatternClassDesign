#include <iostream>
#include "TerminalExpression.h"
#include "AddExpression.h"
#include "AvrExpression.h"
int main() {
    TerminalExpression* score1 = new TerminalExpression(90);
    TerminalExpression* score2 = new TerminalExpression(85);
    TerminalExpression* score3 = new TerminalExpression(95);
    TerminalExpression* score4 = new TerminalExpression(80);
    AddExpression* addExpression1 = new AddExpression(score1,score2);
    AddExpression* addExpression2 = new AddExpression(score3,score4);
    AddExpression* addExpression3 = new AddExpression(addExpression1,addExpression2);
    AvrExpression* avrExpression = new AvrExpression(score1,score2,score3);
    std::cout<<addExpression3->interpreter()<<std::endl;
    std::cout<<avrExpression->interpreter();
    return 0;
}
