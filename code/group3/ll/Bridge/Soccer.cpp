#include "Soccer.h"

Soccer::Soccer(setGroup* Gender)
{
	this->Gender = Gender;
}


void Soccer::setGender()
{
	cout << "You successed in setting the group of this soccer match!" << endl;
	Gender->getGroup();
	cout << endl;
}