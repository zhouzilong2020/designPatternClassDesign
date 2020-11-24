//
// Created by 马天放 on 2020/11/20.
//

#ifndef ITERATOR_SPORTINGEVENT_H
#define ITERATOR_SPORTINGEVENT_H

#include "Athlete.h"
#include <vector>
#include <iostream>

using namespace std;

class SportingEvent {

private:
    string sName;
    int sCumulativeScoring;
    string sIntroduction;
    vector<Athlete> sCompetitors;

public:
    SportingEvent(string name,int score,string intro,vector<Athlete> athlete)
    {
        sName=name;
        sCumulativeScoring = score;
        sIntroduction = intro;
        sCompetitors.insert(sCompetitors.end(),athlete.begin(),athlete.end());
    }
    ~SportingEvent(){}

    void getAllInfo();
};

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


#endif //ITERATOR_SPORTINGEVENT_H
