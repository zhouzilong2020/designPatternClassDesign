#pragma once
#include <iostream>
using namespace std;

namespace FluentInterface
{
	//����������
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
	 * @brief: ���º�������ǼǶ�����Ϣ
	 * @param: �������Ϊ��������Ϣ
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