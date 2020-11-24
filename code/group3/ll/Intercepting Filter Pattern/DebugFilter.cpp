#include "DebugFilter.h"
#include<iostream>
#include<string>
using namespace std;

namespace Intercepting {
	void DebugFilter::execute(string order)
	{
		cout << "request log: " << order << endl;
	}
}
