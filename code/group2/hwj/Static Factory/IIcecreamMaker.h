#ifndef IICECREAMMAKER_H
#define IICECREAMMAKER_H

#pragma once
using namespace std;

namespace StaticFactory
{
	//冰激凌制作抽象接口
	class IIcecreamMaker
	{
	public:
		virtual void makeIcecream() = 0;
	};
}
#endif //IICECREAMMAKER_H