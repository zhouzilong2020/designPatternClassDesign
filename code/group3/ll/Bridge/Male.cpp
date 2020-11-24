#include "Male.h"
#include<iostream>
#include<string>
using namespace std;

Male::Male(string race, string Age_Group)
{
	this->race = race;
	this->Age_Group = Age_Group;
}

void Male::getGroup()
{
	cout << "Group of the event:  Male " << endl;
}