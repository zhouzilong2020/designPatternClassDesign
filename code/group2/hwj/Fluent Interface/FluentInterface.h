#include <iostream>
#include "AnimalTeam.h"

using namespace std;

namespace FluentInterface
{
	void run()
	{
		//ע��èè��
		AnimalTeam neko = AnimalTeam();
		neko.addTeamName("Neko");
		neko.addTeamCode("81657");
		neko.setTeamType(true);
	}
}