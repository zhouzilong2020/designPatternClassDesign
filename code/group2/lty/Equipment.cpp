#include"Equipment.h"

Equipment::Equipment(string type, string parameter):parameter(parameter){
	equipmentType = EquipmentFactory::getEquipmentType(type);
}

string Equipment::getEquipmentInfo(){
	return equipmentType->getEquipmentInfo(parameter);
}
