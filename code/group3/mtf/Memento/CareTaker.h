//
// Created by 马天放 on 2020/11/20.
//

#ifndef MEMENTO_CARETAKER_H
#define MEMENTO_CARETAKER_H

#include "Memento.h"

//保存的进度库
class Caretaker
{
public:
    Caretaker() {}
    void Save(Memento menento) { m_vecMemento.push_back(menento); }
    Memento Load(int state) { return m_vecMemento[state]; }

private:
    vector<Memento> m_vecMemento;
};


#endif //MEMENTO_CARETAKER_H
