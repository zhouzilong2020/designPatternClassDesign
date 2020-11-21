#include"EquipmentType.h"
EquipmentType::EquipmentType(string type):type(type){
	cout << "´´½¨EquipmentType:" + type << endl;
}
EquipmentType::~EquipmentType(){
	cout << "Ïú»ÙEquipmentType:" + type << endl;
}

string EquipmentType::getEquipmentInfo(string parameter) {
	return type + " " + parameter;
}