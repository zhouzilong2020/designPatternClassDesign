
#include "Candidates.h"
#include<iostream>
#include<String>
using namespace std;

Candidates::Candidates()
{
	pList = new Component*[100];
	flag = 0;
}

string Candidates::getName()
{
	return "empty";
}

void Candidates::add(Component *candidate)
{
	pList[flag] = candidate;
	flag++;
}

void Candidates::remove(string name)
{
	for (int i = 0; i < flag; i++)
	{
		if (pList[i]->getName() == name)
		{
			for (int j = i; j < flag; j++)
			{
				pList[j] = pList[j + 1];
			}
			pList[flag] = NULL;
			flag--;

		}
	}
}

void Candidates::getChild()
{
	for (int i = 0; i < flag; i++)
	{
		pList[i]->getChild();
		cout << endl;
	}
}