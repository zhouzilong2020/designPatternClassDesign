#pragma once
#include <iostream>
#include "ChocoIcecreamMaker.h"
#include "VanillaIcecreamMaker.h"
using namespace std;

//��̬�����࣬������ݲ���������Ʒʵ��
class IcecreamMakerOperatorRobo {
public:
	static IIcecreamMaker *operateIcecreamMaker(string icecream);
};

IIcecreamMaker* IcecreamMakerOperatorRobo::operateIcecreamMaker(string icecream)
{
	if (icecream == "ChocoIcecream") {
		IIcecreamMaker* IcecreamMaker = new ChocoIcecreamMaker();
		return IcecreamMaker;
	}
	else if (icecream == "VanillaIcecream") {
		IIcecreamMaker* IcecreamMaker = new VanillaIcecreamMaker();
		return IcecreamMaker;
	}
	/*else
	{

	}*/
}
