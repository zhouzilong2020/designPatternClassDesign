#pragma once
#include<iostream>
#include<unordered_map>
#include"EquipmentType.h"
using namespace std;
class EquipmentFactory {
public:
	static shared_ptr<EquipmentType> getEquipmentType(string type);
private:
	EquipmentFactory();
	static unordered_map<string, shared_ptr<EquipmentType>> cache;
};

