#include <iostream>
#include "AthleteImpl.h"

using namespace std;

int main() {
    AthleteDao *athletedao=new AthleteImpl();

    list<Athlete*>checkIt = athletedao->getAllAthlete();
    list<Athlete*>::iterator it;

    //输出所有运动员
    for(it=checkIt.begin();it!=checkIt.end();++it)
    {
        cout<<"Athlete:"<<(*it)->getAthleteID()<<" Breed:"<<(*it)->getAthleteBreed()<<" Age:"<<(*it)->getAthleteAge()<<" Sex:"
        <<(*it)->getAthleteSex()<<endl;
    }

    //更新运动员
    Athlete * athlete=athletedao->getAthlete(1);
    athlete->setAthleteAge(10);
    athletedao->updateAthlete(athlete);

    //获取运动员
    athlete = athletedao->getAthlete(1);
    cout<<"Athlete:"<<athlete->getAthleteID()<<" Breed:"<<athlete->getAthleteBreed()<<" Age:"<<athlete->getAthleteAge()<<" Sex:"
        <<athlete->getAthleteSex()<<endl;

    return 0;
}
