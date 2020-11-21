#pragma once
#include"EquipmentFactory.h"
class Equipment {
public:
	Equipment(string type, string parameter);
	string getEquipmentInfo();
private:
	shared_ptr<EquipmentType> equipmentType;
	string parameter;
};

