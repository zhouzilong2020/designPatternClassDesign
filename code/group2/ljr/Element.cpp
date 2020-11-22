//
// Created by iMbaGong on 2020/11/12.
//

#include "Element.h"

void Element::accept(Visitor* visitor) {
    visitor->visit(this);
}