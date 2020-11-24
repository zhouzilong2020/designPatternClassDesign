
#include "Referee.h"

namespace Composite {
	Referee::Referee(string name, string race, string gender, int age)
	{
		this->name = name;
		this->race = race;
		this->gender = gender;
		this->age = age;
	}

	void Referee::getChild()
	{
		cout << "Referee:" << name << "   " << race << "   " << gender << "   " << age;
	}
	void Referee::add(Component* Comp)
	{

	}

	void Referee::remove(string name)
	{

	}

	string Referee::getName()
	{
		return name;
	}
}

