#include <iostream>
#include "AnimalTeam.h"

using namespace std;

int main(void)
{
	AnimalTeam neko = AnimalTeam();
	neko.addTeamName("Neko");
	neko.addTeamCode("81657");
	neko.setTeamType(true);
	return 0;
}