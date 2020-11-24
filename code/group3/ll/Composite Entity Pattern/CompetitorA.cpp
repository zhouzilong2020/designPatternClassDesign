#include "CompetitorA.h"

namespace Entity {
	void CompetitorA::setInfo(string name)
	{
		this->name = name;
	}

	string CompetitorA::getInfo()
	{
		return name;
	}
}
