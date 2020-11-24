#include "Female.h"
#include<iostream>
using namespace std;

namespace Bridge {
	Female::Female(string race, string Age_Group)
	{
		this->race = race;
		this->Age_Group = Age_Group;
	}

	void Female::getGroup()
	{
		cout << "Group of the event:  Female " << endl;
	}
}
