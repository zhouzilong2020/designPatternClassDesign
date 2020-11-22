//
// Created by 马天放 on 2020/11/22.
//

#ifndef DATA_ACCESS_OBJECT_ATHLETE_H
#define DATA_ACCESS_OBJECT_ATHLETE_H

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

    int getAthleteID() const;
    string getAthleteBreed() const;
    int getAthleteAge() const;
    string getAthleteSex() const;

    void setAthleteAge(int age);
};


int Athlete::getAthleteID() const
{
    return mAthleteID;
}

string Athlete::getAthleteBreed() const
{
    return mBreed;
}

int Athlete::getAthleteAge() const
{
    return mAge;
}

string Athlete::getAthleteSex() const
{
    return mSex;
}

void Athlete::setAthleteAge(int age)
{
    mAge=age;
}

#endif //DATA_ACCESS_OBJECT_ATHLETE_H
