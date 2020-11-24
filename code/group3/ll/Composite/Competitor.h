#pragma once
#include "Component.h"
#include<iostream>
#include<string>
using namespace std;

namespace Composite {
	class Competitor :public Component
	{
	public:
		Competitor(string name, string race, string gender, int age);
		void getChild();
		string getName();
		string name;
	private:

		string race;
		string gender;
		int age;
		void add(Component* Comp);
		void remove(string name);
	};
}


