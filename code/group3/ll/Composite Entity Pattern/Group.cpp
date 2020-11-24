#include "Group.h"


namespace Entity {
	Group::Group()
	{
		A = new CompetitorA();
		B = new CompetitorB();
		result = new NameReturn();
	}

	void Group::setInfo(string namea, string nameb)
	{
		A->setInfo(namea);
		B->setInfo(nameb);
	}

	NameReturn Group::getInfo()
	{
		result->setNames(A->getInfo(), B->getInfo());
		return *result;
	}

	void NameReturn::setNames(string namea, string nameb)
	{
		this->namea = namea;
		this->nameb = nameb;
	}
}
