#include <iostream>
#include "IcecreamMakerOperatorRobo.h"
using namespace std;

namespace StaticFactory
{
	void run()
	{
		IcecreamMakerOperatorRobo::operateIcecreamMaker("ChocoIcecream")->makeIcecream();
		IcecreamMakerOperatorRobo::operateIcecreamMaker("VanillaIcecream")->makeIcecream();
	}
}
