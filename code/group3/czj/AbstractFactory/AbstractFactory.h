#include <iostream>
using namespace std;

namespace AbstractFactory
{
    class IndividualEvents
    {
    public:
        virtual void show() = 0;
    };
    //IndividualEvent1
    class Running : public IndividualEvents
    {
    public:
        void show()
        {
            cout << "A Running::IndividualEvents() has been created." << endl;
        }
    };
    //IndividualEvent2
    class Swimming : public IndividualEvents
    {
    public:
        void show()
        {
            cout << "A Swimming::IndividualEvents() has been created." << endl;
        }
    };
    //IndividualEvent3
    class HighJumping : public IndividualEvents
    {
    public:
        void show()
        {
            cout << "A HighJumping::IndividualEvents() has been created." << endl;
        }
    };

    class TeamEvents
    {
    public:
        virtual void show() = 0;
    };
    //TeamEvents1
    class TugOfWar : public TeamEvents
    {
    public:
        void show()
        {
            cout << "A TugOfWar::TeamEvents() has been created." << endl;
        }
    };
    //TeamEvents2
    class RelayRunning : public TeamEvents
    {
    public:
        void show()
        {
            cout << "A RelayRunning::TeamEvents() has been created." << endl;
        }
    };
    //TeamEvents3
    class Basketball : public TeamEvents
    {
    public:
        void show()
        {
            cout << "A Basketball::TeamEvents() has been created." << endl;
        }
    };

    class AbstractFactory
    {
    public:
        virtual IndividualEvents *getIndividualEvent(string IndividualEvent) = 0;
        virtual TeamEvents *getTeamEvent(string TeamEvent) = 0;
    };
    //IndividualFactory
    class IndividualEventsFactory : public AbstractFactory
    {
    public:
        IndividualEvents *getIndividualEvent(string IndividualEvent)
        {
            if (IndividualEvent.empty())
            {
                return NULL;
            }

            if (IndividualEvent == "Running")
            {
                return new Running();
            }
            else if (IndividualEvent == "Swimming")
            {
                return new Swimming();
            }
            else if (IndividualEvent == "HighJumping")
            {
                return new HighJumping();
            }
            return NULL;
        }

        TeamEvents *getTeamEvent(string TeamEvent)
        {
            return NULL;
        }
    };
    //TeamFactory
    class TeamEventsFactory : public AbstractFactory
    {
    public:
        IndividualEvents *getIndividualEvent(string IndividualEvent)
        {
            return NULL;
        }

        TeamEvents *getTeamEvent(string TeamEvent)
        {
            if (TeamEvent.empty())
            {
                return NULL;
            }
            else if (TeamEvent == "TugOfWar")
            {
                return new TugOfWar();
            }
            else if (TeamEvent == "RelayRunning")
            {
                return new RelayRunning();
            }
            else if (TeamEvent == "Basketball")
            {
                return new Basketball();
            }
            return NULL;
        }
    };

    class FactoryProducer
    {
    public:
        static AbstractFactory *getFactory(string choice)
        {
            if (choice == "IndividualEventsFactory")
            {
                return new IndividualEventsFactory();
            }
            else if (choice == "TeamEventsFactory")
            {
                return new TeamEventsFactory();
            }
            return NULL;
        }
    };
} // namespace AbstractFactory