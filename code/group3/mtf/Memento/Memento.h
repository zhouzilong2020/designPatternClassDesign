//
// Created by 马天放 on 2020/11/20.
//

#ifndef MEMENTO_MEMENTO_H
#define MEMENTO_MEMENTO_H
#pragma once

#include "SportingEvent.h"

using namespace std;

class Memento
{
public:
    SportingEvent event;

public:
    Memento(){}
    Memento(SportingEvent s);
    Memento &operator=(const Memento &memento)
    {
        event=memento.event;
        return *this;
    }
};

Memento::Memento(SportingEvent s)
{
    event = SportingEvent(s);
}

#endif //MEMENTO_MEMENTO_H
