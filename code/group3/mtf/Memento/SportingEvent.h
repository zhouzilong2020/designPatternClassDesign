//
// Created by 马天放 on 2020/11/20.
//

#ifndef ITERATOR_SPORTINGEVENT_H
#define ITERATOR_SPORTINGEVENT_H
#pragma once

#include <vector>
#include "Athlete.h"

class Memento;

using namespace std;

class SportingEvent {

private:
    string sName;
    int sCumulativeScoring;
    string sIntroduction;
    vector<Athlete> sCompetitors;

public:
    SportingEvent(){}
    SportingEvent(string name,int score,string intro,vector<Athlete> athlete)
    {
        sName=name;
        sCumulativeScoring = score;
        sIntroduction = intro;
        sCompetitors.insert(sCompetitors.end(),athlete.begin(),athlete.end());
    }
    ~SportingEvent(){}

    //备忘录模式
    Memento Save();
    void Load(Memento memento);

    //运动会操作
    void addAthlete(Athlete ath);
    void deleteAthlete(int athleteID);

    void getAllInfo();
};

#include "Memento.h"

//备忘录模式
Memento SportingEvent::Save() //保存进度，只与Memento对象交互，并不牵涉到Caretake
{
    Memento memento = Memento();
    memento.event.sName=sName;
    memento.event.sCompetitors=sCompetitors;
    memento.event.sIntroduction=sIntroduction;
    memento.event.sCumulativeScoring=sCumulativeScoring;
    return memento;
}

void SportingEvent::Load(Memento memento) //载入进度，只与Memento对象交互，并不牵涉到Caretake
{
    sName=memento.event.sName;
    sCumulativeScoring=memento.event.sCumulativeScoring;
    sIntroduction=memento.event.sIntroduction;
    sCompetitors=memento.event.sCompetitors;
}

void SportingEvent::addAthlete(Athlete ath)
{
    sCompetitors.emplace_back(ath);
}

void SportingEvent::deleteAthlete(int athleteID)
{
    for(auto it=sCompetitors.begin();it!=sCompetitors.end();++it)
    {
        if(it->getAthleteID()==athleteID)
        {
            sCompetitors.erase(it);
            break;
        }
    }
}

void SportingEvent::getAllInfo()
{
    cout<<"SportingEvent's name :"<<sName<<endl;
    cout<<"SportingEvent's score :"<<sCumulativeScoring<<endl;
    cout<<"SportingEvent's intro :"<<sIntroduction<<endl;
    for(int i=0;i<sCompetitors.size();++i)
    {
        cout<<"Athlete's ID :"<<sCompetitors[i].getAthleteID()<<endl;
    }
}


#endif //MEMENTO_SPORTINGEVENT_H
