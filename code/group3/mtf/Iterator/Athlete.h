//
// Created by 马天放 on 2020/11/20.
//

#ifndef ITERATOR_ATHLETE_H
#define ITERATOR_ATHLETE_H

#include <string>

using namespace std;

class Athlete
{
private:
    int athleteID;
    string breed;
    int age;
    string sex;

public:
    Athlete(int id,string breed,int age,string sex)
    {
        athleteID=id;
        breed=breed;
        age=age;
        sex=sex;
    }
    ~Athlete(){}

    int getAthleteID();
    string getBreed();
    int getAge();
    string getSex();
};

int Athlete::getAthleteID()
{
    return athleteID;
}

string Athlete::getBreed()
{
    return breed;
}

int Athlete::getAge()
{
    return age;
}

string Athlete::getSex()
{
    return sex;
}



#endif //ITERATOR_ATHLETE_H
