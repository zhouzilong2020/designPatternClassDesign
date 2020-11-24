#include <iostream>
#include "IcecreamMakerOperatorRobo.h"
using namespace std;

int main()
{
	IcecreamMakerOperatorRobo::operateIcecreamMaker("ChocoIcecream")->makeIcecream();
	IcecreamMakerOperatorRobo::operateIcecreamMaker("VanillaIcecream")->makeIcecream();
	return 0;
}