//
// Created by 马天放 on 2020/11/22.
//

#ifndef TRANSFER_OBJECT_ATHLETEBO_H
#define TRANSFER_OBJECT_ATHLETEBO_H

#include"AthleteVO.h"
#include<list>

class AthleteBO {
public:
    AthleteBO();
    ~AthleteBO();

    list<AthleteVO*> getAllAthlete();
    AthleteVO* getAthlete(int athleteID);

    void updateAthlete(AthleteVO* athlete);
    void deleteAthlete(AthleteVO* athlete);
private:
    //列表当作数据库
    list<AthleteVO*> athletes;
};

AthleteBO::AthleteBO()
{
    AthleteVO *avo1 = new AthleteVO(1,"狗",12,"公");
    AthleteVO *avo2 = new AthleteVO(2,"猫",19,"母");

    this->athletes.emplace_back(avo1);
    this->athletes.emplace_back(avo2);
}

list<AthleteVO*> AthleteBO::getAllAthlete()
{
    return athletes;
}

//从数据库中检索运动员
AthleteVO* AthleteBO::getAthlete(int athleteID)
{
    list<AthleteVO*>::iterator it;
    for(it = athletes.begin();it!=athletes.end();++it)
    {
        if(athleteID == (*it)->getAthleteID())
        {
            return (*it);
        }
    }
    return NULL;
}

void AthleteBO::updateAthlete(AthleteVO *athlete)
{
    list<AthleteVO*>::iterator it;
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

void AthleteBO::deleteAthlete(AthleteVO *athlete)
{
    list<AthleteVO*>::iterator it;
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

#endif //TRANSFER_OBJECT_ATHLETEBO_H
