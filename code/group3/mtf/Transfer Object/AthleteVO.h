//
// Created by 马天放 on 2020/11/22.
//

#ifndef TRANSFER_OBJECT_ATHLETEVO_H
#define TRANSFER_OBJECT_ATHLETEVO_H

#include<iostream>
#include<string>

using namespace std;

class AthleteVO
{
private:
    int mAthleteID;
    string mBreed;
    int mAge;
    string mSex;
public:
    AthleteVO(){}
    AthleteVO(int id,string breed,int age,string sex);

    int getAthleteID() const;
    string getAthleteBreed() const;
    int getAthleteAge() const;
    string getAthleteSex() const;

    void setAthleteID(int athleteID);
    void setAthleteBreed(string breed);
    void setAthleteAge(int age);
    void setAthleteSex(string sex);
};

AthleteVO::AthleteVO(int id,string breed,int age,string sex)
{
    mAthleteID=id;
    mBreed=breed;
    mAge=age;
    mSex=sex;
}

int AthleteVO::getAthleteID() const
{
    return mAthleteID;
}

string AthleteVO::getAthleteBreed() const
{
    return mBreed;
}

int AthleteVO::getAthleteAge() const
{
    return mAge;
}

string AthleteVO::getAthleteSex() const
{
    return mSex;
}

void AthleteVO::setAthleteID(int athleteID)
{
    mAthleteID=athleteID;
}

void AthleteVO::setAthleteBreed(string breed)
{
    mBreed=breed;
}

void AthleteVO::setAthleteAge(int age)
{
    mAge=age;
}

void AthleteVO::setAthleteSex(string sex)
{
    mSex=sex;
}

#endif //TRANSFER_OBJECT_ATHLETEVO_H
