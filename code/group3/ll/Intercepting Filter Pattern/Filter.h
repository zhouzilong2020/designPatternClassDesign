#pragma once
#include<iostream>
#include<string>
using namespace std;

namespace Intercepting {
	class Filter
	{
	public:
		virtual void execute(string order) = 0;
	};

}

