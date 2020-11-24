#pragma once
#include<string>
#include<iostream>
using namespace std;
class EquipmentType {
public:
	EquipmentType(string type);
	~EquipmentType();
	string getEquipmentInfo(string parameter);
private:
	string type;
};