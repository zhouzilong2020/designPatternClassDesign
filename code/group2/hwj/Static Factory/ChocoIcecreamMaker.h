#ifndef CHOCOICECREAMMAKER_H
#define CHOCOICECREAMMAKER_H

#pragma once
#include <iostream>
#include "IIcecreamMaker.h"

using namespace std;

namespace StaticFactory
{
	//巧克力冰激凌制作机类（具体产品）
	class ChocoIcecreamMaker :public IIcecreamMaker
	{
	public:
		void makeIcecream();
	};
}

#endif // !CHOCOICECREAMMAKER_H