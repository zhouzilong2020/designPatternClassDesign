//
// Created by iMbaGong on 2020/11/21.
//

#ifndef VISITOR_EXPRESSION_H
#define VISITOR_EXPRESSION_H


class Expression {
public:
virtual int interpreter();
};

int Expression::interpreter() {
    return 0;
}


#endif //VISITOR_EXPRESSION_H
