#ifndef VANILLAICECREAMMAKER_H
#define VANILLAICECREAMMAKER_H

#pragma once
#include <iostream>
#include "IIcecreamMaker.h"
using namespace std;

namespace StaticFactory
{
	//��ݱ������������ࣨ�����Ʒ��
	class VanillaIcecreamMaker :public IIcecreamMaker
	{
	public:
		void makeIcecream();
	};
}

#endif //VANILLAICECREAMMAKER_H