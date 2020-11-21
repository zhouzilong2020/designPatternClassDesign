#include<iostream>
#include"Basketball.h"
#include"Soccer.h"
#include"Female.h"
#include"Male.h"
using namespace std;

int main()
{
	Male* mGroup1 = new Male("lion","adult");
	Male* mGroup2 = new Male("tiger", "adolescent");
	
	Female* fGroup1 = new Female("lion", "adult");
	Female* fGroup2 = new Female("rabbit", "adolescent");

	Basketball* bEvent1 = new Basketball(mGroup1);
	Basketball* bEvent2 = new Basketball(fGroup2);

	Soccer* sEvent1 = new Soccer(fGroup2);

	bEvent1->setGender();
	bEvent2->setGender();
	sEvent1->setGender();

	return 0;
}