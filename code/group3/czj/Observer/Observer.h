#include <iostream>
#include <list>
#include <cstring>
using namespace std;

class Observer
{
public:
    virtual void Update(string) = 0;
};

class RunningNotification
{
public:
    virtual void Subscribe(Observer *) = 0;
    virtual void Unsubscribe(Observer *) = 0;
    virtual void NotifySubscribers() = 0;
};

class Rabbit : public Observer
{
public:
    Rabbit(RunningNotification *pSubject) : m_pSubject(pSubject) {}

    void Update(string newRaceTime)
    {
        cout << "Rabbit get the updated time for the running race: " << newRaceTime << endl;
    }

private:
    RunningNotification *m_pSubject;
};

class tortoise : public Observer
{
public:
    tortoise(RunningNotification *pSubject) : m_pSubject(pSubject) {}

    void Update(string newRaceTime)
    {
        cout << "tortoise get the updated time for the running race: " << newRaceTime << endl;
    }

private:
    RunningNotification *m_pSubject;
};

class ConcreteRunningNotification : public RunningNotification
{
public:
    void Subscribe(Observer *pObserver);
    void Unsubscribe(Observer *pObserver);
    void NotifySubscribers();

    void SetRacetime(string newRaceTime)
    {
        RunningRaceTime = newRaceTime;
    }

private:
    std::list<Observer *> m_ObserverList;
    string RunningRaceTime;
};

void ConcreteRunningNotification::Subscribe(Observer *pObserver)
{
    m_ObserverList.push_back(pObserver);
}

void ConcreteRunningNotification::Unsubscribe(Observer *pObserver)
{
    m_ObserverList.remove(pObserver);
}

void ConcreteRunningNotification::NotifySubscribers()
{
    std::list<Observer *>::iterator it = m_ObserverList.begin();
    while (it != m_ObserverList.end())
    {
        (*it)->Update(RunningRaceTime);
        ++it;
    }
}
