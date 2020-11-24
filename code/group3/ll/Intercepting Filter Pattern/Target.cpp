#include "Target.h"

namespace Intercepting {
	void Target::execute(string order)
	{
		cout << "Executing request: " << order << endl;
	}
}
