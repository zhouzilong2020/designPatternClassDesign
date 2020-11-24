#include "Multiton.h"
#include <iostream>
#include <cstring>
using namespace std;
int main(void)
{
    //init
    Animal::init();
    //create instance
    Animal animal1=Animal::getInstance(1);
    Animal animal2=Animal::getInstance(2);
    cout<<animal1.getAttribute(1)<<endl;
    cout<<animal2.getAttribute(2)<<endl;
}
