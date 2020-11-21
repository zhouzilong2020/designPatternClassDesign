//
// Created by 马天放 on 2020/11/20.
//

#ifndef ITERATOR_AGGREGATE_H
#define ITERATOR_AGGREGATE_H

#include "Iterator.h"

template <class Item>
class Aggregate
{
public:
    Aggregate(){};
    virtual ~Aggregate(){};

    virtual void pushData(Item item) = 0;
    virtual Iterator<Item> *createIterator() = 0;
    virtual Item &operator[](int index) = 0;
    virtual int getSize() = 0;
};


#endif //ITERATOR_AGGREGATE_H
