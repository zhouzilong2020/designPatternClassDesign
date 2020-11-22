//
// Created by 马天放 on 2020/11/22.
//

#ifndef DATA_ACCESS_OBJECT_ATHLETEDAO_H
#define DATA_ACCESS_OBJECT_ATHLETEDAO_H

#include "Athlete.h"
#include<list>

class AthleteDao {
public:
    AthleteDao(){}
    ~AthleteDao(){}

    virtual list<Athlete*> getAllAthlete() = 0;
    virtual Athlete*getAthlete(int athleteID) = 0;
    virtual void updateAthlete(Athlete* athlete) = 0;
    virtual void deleteAthlete(Athlete* athlete) = 0;
};


#endif //DATA_ACCESS_OBJECT_ATHLETEDAO_H
