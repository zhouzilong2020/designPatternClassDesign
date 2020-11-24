#ifndef VANILLAICECREAMMAKER_H
#define VANILLAICECREAMMAKER_H

#pragma once
#include <iostream>
#include "IIcecreamMaker.h"
using namespace std;

namespace StaticFactory
{
	//香草冰激凌制作机类（具体产品）
	class VanillaIcecreamMaker :public IIcecreamMaker
	{
	public:
		void makeIcecream();
	};
}

#endif //VANILLAICECREAMMAKER_H