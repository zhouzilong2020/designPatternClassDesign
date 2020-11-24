#include "FilterChain.h"

namespace Intercepting {
	FilterChain::FilterChain()
	{
		flag = 0;
		List = new Filter * [10];
	}


	void FilterChain::setTarget(Target target)
	{
		this->target = target;
	}

	void FilterChain::addFilter(Filter* filter)
	{
		List[flag] = filter;
		flag++;
	}

	void FilterChain::execute(string order)
	{
		for (int i = 0; i < 2; i++)
		{
			List[i]->execute(order);
		}
		target.execute(order);
	}
}


