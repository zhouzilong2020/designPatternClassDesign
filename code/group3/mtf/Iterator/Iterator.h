//
// Created by 马天放 on 2020/11/20.
//

#ifndef ITERATOR_ITERATOR_H
#define ITERATOR_ITERATOR_H

#include<iostream>

template <class Item>
class Iterator
{
public:
    Iterator(){};
    virtual ~Iterator(){};

    virtual void first() = 0;
    virtual void next() = 0;
    virtual Item *curItem() = 0;
    virtual bool isDone() = 0;
    virtual void last() = 0;
};


#endif //ITERATOR_ITERATOR_H
