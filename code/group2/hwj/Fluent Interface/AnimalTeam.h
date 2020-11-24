#pragma once
#include <iostream>
using namespace std;

class AnimalTeam
{
public:
	void addTeamName(string name);
	void addTeamCode(string code);
	void setTeamType(bool isNationalTeam);
private:
	string teamName;
	string teamCode;
	bool isNationalTeam;
};

void AnimalTeam::addTeamName(string name)
{
	teamName = name;
	cout <<"TEAMNAME:\t"<< name << endl;
}

void AnimalTeam::addTeamCode(string code)
{
	teamCode = code;
	cout <<"TEAMCODE:\t"<< code << endl;
}

void AnimalTeam::setTeamType(bool _isNationalTeam)
{
	isNationalTeam = _isNationalTeam;
	cout <<"ISNATIONALTEAM:\t"<< _isNationalTeam << endl;
}