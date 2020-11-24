#include "GroupControler.h"


namespace Entity {
	GroupControler::GroupControler()
	{
		group = new Group();
	}

	void GroupControler::setInfo(string namea, string nameb)
	{
		group->setInfo(namea, nameb);
	}

	NameReturn GroupControler::getInfo()
	{
		return group->getInfo();
	}
}
