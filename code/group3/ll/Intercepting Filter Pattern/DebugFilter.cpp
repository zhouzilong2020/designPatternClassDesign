#include "DebugFilter.h"
#include<iostream>
#include<string>
using namespace std;

void DebugFilter::execute(string order)
{
	cout << "request log: " << order<<endl;
}