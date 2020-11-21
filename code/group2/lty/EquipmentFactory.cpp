#include"EquipmentFactory.h"

unordered_map<string, shared_ptr<EquipmentType>> EquipmentFactory::cache;

shared_ptr<EquipmentType> EquipmentFactory::getEquipmentType(string type) {
	if (cache[type] == NULL) {
		shared_ptr<EquipmentType> newEquipmentType(new EquipmentType(type));
		cache[type] = newEquipmentType;
		return newEquipmentType;
	}
	else {
		return cache[type];
	}
}

