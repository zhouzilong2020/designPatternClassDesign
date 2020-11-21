#include "SportingEvent.h"
#include "CareTaker.h"
#include "Athlete.h"

using namespace std;

int main()
{
    // 创建运动会
    vector<Athlete> athlete;

    athlete.emplace_back(Athlete(1,"狗",10,"公"));
    athlete.emplace_back(Athlete(2,"猪",3,"母"));
    athlete.emplace_back(Athlete(3,"猫",2,"母"));
    athlete.emplace_back(Athlete(4,"马",4,"公"));
    athlete.emplace_back(Athlete(12,"虎",21,"公"));

    SportingEvent sport1 = SportingEvent("football",100,"lilinb",athlete);

    SportingEvent s = SportingEvent(sport1);


    Caretaker taker = Caretaker();
    Memento memento = Memento(s);

    // 显示初始的状态
    cout<<"运动会初始状态："<<endl;
    s.getAllInfo();
    // 存档
    taker.Save(memento);
    // 删除参赛运动员
    s.deleteAthlete(1);
    s.deleteAthlete(2);
    cout<<"运动会删除参赛运动员后状态："<<endl;
    s.getAllInfo();
    // 读档，显示信息
    s.Load(taker.Load(0));
    cout<<"运动会恢复修改前状态："<<endl;
    s.getAllInfo();
    return 0;
}
