#include "Competitor.h"

Competitor::Competitor(string name, string race, string gender, int age)
{
	this->name = name;
	this->race = race;
	this->gender = gender;
	this->age = age;
}
void Competitor::add(Component* Comp)
{

}

void Competitor::remove(string name)
{

}

void Competitor::getChild()
{
	cout<<"Competitor:"<<name<<"   "<<race<< "   "<< gender<< "   "<<age;
}

string Competitor::getName()
{
	return name;
}
