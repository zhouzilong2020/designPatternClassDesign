#include <iostream>
#include "AthleteBO.h"

using namespace std;

int main() {
    AthleteBO *athleteBusinessObject = new AthleteBO();

    //输出所有的运动员
    for (auto& athlete : athleteBusinessObject->getAllAthlete() ){
        cout<<"Athlete:"<<athlete->getAthleteID()<<" Breed:"<<athlete->getAthleteBreed()<<" Age:"<<athlete->getAthleteAge()<<" Sex:"
            <<athlete->getAthleteSex()<<endl;
    }

    //更新运动员
    AthleteVO *athlete = athleteBusinessObject->getAthlete(2);
    athlete->setAthleteBreed("老虎");
    athleteBusinessObject->updateAthlete(athlete);

    //获取运动员
    athlete = athleteBusinessObject->getAthlete(2);
    cout<<"Athlete:"<<athlete->getAthleteID()<<" Breed:"<<athlete->getAthleteBreed()<<" Age:"<<athlete->getAthleteAge()<<" Sex:"
        <<athlete->getAthleteSex()<<endl;
    return 0;
}
