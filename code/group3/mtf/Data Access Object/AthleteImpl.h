//
// Created by 马天放 on 2020/11/22.
//

#ifndef DATA_ACCESS_OBJECT_ATHLETEIMPL_H
#define DATA_ACCESS_OBJECT_ATHLETEIMPL_H

#include "AthleteDao.h"

class AthleteImpl : public AthleteDao{
public:
    AthleteImpl();
    AthleteImpl(Athlete* athlete);
    ~AthleteImpl();

    list<Athlete*>getAllAthlete();
    Athlete*getAthlete(int athleteID);
    void updateAthlete(Athlete* athlete);
    void deleteAthlete(Athlete* athlete);

private:
    list<Athlete*> athletes;
};

AthleteImpl::AthleteImpl()
{
    Athlete* a1 = new Athlete(1,"猫",12,"公");
    Athlete* a2 = new Athlete(2,"狗",2,"母");
    this->athletes.emplace_back(a1);
    this->athletes.emplace_back(a2);
}

AthleteImpl::AthleteImpl(Athlete *athlete)
{
    this->athletes.emplace_back(athlete);
}

AthleteImpl::~AthleteImpl()
{
    list<Athlete*>::iterator it;
    for(it = athletes.begin();it!=athletes.end();++it)
    {
        delete*it;
        (*it)=NULL;
    }
}

list<Athlete*> AthleteImpl::getAllAthlete()
{
    return athletes;
}

Athlete* AthleteImpl::getAthlete(int athleteID)
{
    list<Athlete*>::iterator it;
    for(it = athletes.begin();it!=athletes.end();++it)
    {
        if(athleteID == (*it)->getAthleteID())
        {
            return (*it);
        }
    }
    return NULL;
}

void AthleteImpl::updateAthlete(Athlete *athlete)
{
    list<Athlete*>::iterator it;
    for(it = athletes.begin();it!=athletes.end();++it)
    {
        if(athlete->getAthleteID() == (*it)->getAthleteID())
        {
            std::cout<<"AthleteID:"<<athlete->getAthleteID()<<" update in the database."<<std::endl;
            (*it)->setAthleteAge(athlete->getAthleteAge());
            break;
        }
    }
}

void AthleteImpl::deleteAthlete(Athlete *athlete)
{
    list<Athlete*>::iterator it;
    for(it = athletes.begin();it!=athletes.end();++it)
    {
        if(athlete->getAthleteID() == (*it)->getAthleteID())
        {
            std::cout<<"AthleteID:"<<athlete->getAthleteID()<<" delete in the database."<<std::endl;
            this->athletes.erase(it);
            break;
        }
    }
}

#endif //DATA_ACCESS_OBJECT_ATHLETEIMPL_H
