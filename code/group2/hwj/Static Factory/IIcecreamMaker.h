#ifndef IICECREAMMAKER_H
#define IICECREAMMAKER_H

#pragma once
using namespace std;

namespace StaticFactory
{
	//��������������ӿ�
	class IIcecreamMaker
	{
	public:
		virtual void makeIcecream() = 0;
	};
}
#endif //IICECREAMMAKER_H