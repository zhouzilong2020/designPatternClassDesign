#pragma once
#include <iostream>
using namespace std;

namespace FluentInterface
{
	//动物代表队类
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
	/**
	 * @brief: 以下函数负责登记队伍信息
	 * @param: 输入参数为各队伍信息
	 */
	void AnimalTeam::addTeamName(string name)
	{
		teamName = name;
		cout << "TEAMNAME:\t" << name << endl;
	}

	void AnimalTeam::addTeamCode(string code)
	{
		teamCode = code;
		cout << "TEAMCODE:\t" << code << endl;
	}

	void AnimalTeam::setTeamType(bool _isNationalTeam)
	{
		isNationalTeam = _isNationalTeam;
		cout << "ISNATIONALTEAM:\t" << _isNationalTeam << endl;
	}
}