#include "Observer/run.h"
#include "Multiton/run.h"
#include "Mediator/run.h"
#include "AbstractFactory/run.h"
int main(void)
{
    Observer::run();
    Multiton::run();
    Mediator::run();
    AbstractFactory::run();

}