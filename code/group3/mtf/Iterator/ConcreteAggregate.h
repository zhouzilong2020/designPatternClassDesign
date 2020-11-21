//
// Created by 马天放 on 2020/11/20.
//

#ifndef ITERATOR_CONCRETEAGGREGATE_H
#define ITERATOR_CONCRETEAGGREGATE_H


#pragma once
#include <vector>
#include "Aggregate.h"
#include "ConcreteIterator.h"

using namespace std;

template <class Item>
class ConcreteAggregate : public Aggregate<Item>
{
public:
    ConcreteAggregate(){}
    ~ConcreteAggregate(){}

    void pushData(Item item);
    Iterator<Item> *createIterator();
    Item &operator[](int index);
    int getSize();

private:
    vector<Item> data;
};

template <class Item>
void ConcreteAggregate<Item>::pushData(Item item)
{
    data.push_back(item);
}

template <class Item>
Iterator<Item> *ConcreteAggregate<Item>::createIterator()
{
    return new ConcreteIterator<Item>(this);
}

template <class Item>
Item &ConcreteAggregate<Item>::operator[](int index)
{
    return data[index];
}

template <class Item>
int ConcreteAggregate<Item>::getSize()
{
    return data.size();
}


#endif //ITERATOR_CONCRETEAGGREGATE_H
