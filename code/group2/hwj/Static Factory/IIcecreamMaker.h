#ifndef IICECREAMMAKER_H
#define IICECREAMMAKER_H

#pragma once
using namespace std;
//冰激凌制作抽象接口
class IIcecreamMaker
{
public:
	virtual void makeIcecream()=0;
	//void setType(string _type);
private:
	//string type;
};

//void IIcecreamMaker::setType(string _type)
//{
//	type = _type;
//}

#endif //IICECREAMMAKER_H
