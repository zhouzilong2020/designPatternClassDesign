#include "Multiton.h"
#include <iostream>
#include <cstring>
using namespace std;
namespace Multiton
{
    void run()
    {
        //init
        Animal::init();
        //create instance
        Animal animal1 = Animal::getInstance(1);
        Animal animal2 = Animal::getInstance(2);
        cout << "a " << animal1.getAttribute(1) << " is created" << endl;
        cout << "a " << animal2.getAttribute(2) << " is created" << endl;
    }
} // namespace Multiton
