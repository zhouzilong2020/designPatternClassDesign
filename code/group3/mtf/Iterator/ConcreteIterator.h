//
// Created by 马天放 on 2020/11/20.
//

#ifndef ITERATOR_CONCRETEITERATOR_H
#define ITERATOR_CONCRETEITERATOR_H

#include "Aggregate.h"
#include "Iterator.h"

template <class Item>

class ConcreteIterator : public Iterator<Item>
{
public:
    ConcreteIterator(Aggregate<Item> *a) : aggr(a), cur(0){};
    virtual ~ConcreteIterator(){};

    virtual void first();
    virtual void next();
    virtual Item *curItem();
    virtual bool isDone();
    virtual void last();

private:
    Aggregate<Item> *aggr;
    int cur;
};

template <class Item>
void ConcreteIterator<Item>::first()
{
    cur = 0;
}

template <class Item>
void ConcreteIterator<Item>::next()
{
    if (cur < aggr->getSize())
        cur++;
}

template <class Item>
Item *ConcreteIterator<Item>::curItem()
{
    if (cur < aggr->getSize())
    {
        return &(*aggr)[cur];
    }
    else
    {
        return NULL;
    }
}

template <class Item>
bool ConcreteIterator<Item>::isDone()
{
    return cur >= aggr->getSize();
}

template <class Item>
void ConcreteIterator<Item>::last()
{
    cur=aggr->getSize()-1;
}

#endif //ITERATOR_CONCRETEITERATOR_H
