#include"EquipmentType.h"
EquipmentType::EquipmentType(string type):type(type){
	cout << "����EquipmentType:" + type << endl;
}
EquipmentType::~EquipmentType(){
	cout << "����EquipmentType:" + type << endl;
}

string EquipmentType::getEquipmentInfo(string parameter) {
	return type + " " + parameter;
}