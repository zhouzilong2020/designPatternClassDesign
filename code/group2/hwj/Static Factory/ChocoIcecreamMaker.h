#ifndef CHOCOICECREAMMAKER_H
#define CHOCOICECREAMMAKER_H

#pragma once
#include <iostream>
#include "IIcecreamMaker.h"

using namespace std;

namespace StaticFactory
{
	//�ɿ����������������ࣨ�����Ʒ��
	class ChocoIcecreamMaker :public IIcecreamMaker
	{
	public:
		void makeIcecream();
	};
}

#endif // !CHOCOICECREAMMAKER_H