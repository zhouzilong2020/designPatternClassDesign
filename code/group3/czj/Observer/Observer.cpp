#include "Observer.h"
int main()
{
    // Create Subject
    ConcreteRunningNotification *pSubject = new ConcreteRunningNotification();

    // Create Observer
    Observer *pObserver = new Rabbit(pSubject);
    Observer *pObserver2 = new tortoise(pSubject);


    pSubject->SetRacetime("Oct.10 11:50");

    //Register the observer
    pSubject->Subscribe(pObserver);
    pSubject->Subscribe(pObserver2);

    pSubject->NotifySubscribers();

    //Unregister the observer
    pSubject->Unsubscribe(pObserver);

    pSubject->SetRacetime("Oct.15 18:30");
    pSubject->NotifySubscribers();


}