#pragma once
#include <iostream>
#include "ChocoIcecreamMaker.h"
#include "VanillaIcecreamMaker.h"
using namespace std;

namespace StaticFactory
{
	//静态工厂类，负责根据参数创建产品实例
	class IcecreamMakerOperatorRobo {
	public:
		static IIcecreamMaker* operateIcecreamMaker(string icecream);
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
	}
}
