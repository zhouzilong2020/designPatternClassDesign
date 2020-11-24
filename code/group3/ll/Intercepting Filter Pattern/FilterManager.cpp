#include "FilterManager.h"


namespace Intercepting {
	FilterManager::FilterManager(Target target)
	{
		chain = new FilterChain();
		chain->setTarget(target);
	}

	void FilterManager::setFilter(Filter* filter)
	{
		chain->addFilter(filter);
	}

	void FilterManager::filterRequest(string request)
	{
		chain->execute(request);
	}
}
