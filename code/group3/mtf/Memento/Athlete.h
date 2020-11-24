//
// Created by 马天放 on 2020/11/20.
//

#ifndef MEMENTO_ATHLETE_H
#define MEMENTO_ATHLETE_H

#include<iostream>

using namespace std;

//游戏角色
class Athlete
{
private:
    int mAthleteID;
    string mBreed;
    int mAge;
    string mSex;
public:
    Athlete(){}
    Athlete(int id,string breed,int age,string sex)
    {
        mAthleteID=id;
        mBreed=breed;
        mAge=age;
        mSex=sex;
    }

    int getAthleteID();
};


int Athlete::getAthleteID()
{
    return mAthleteID;
}

#endif //MEMENTO_ATHLETE_H
