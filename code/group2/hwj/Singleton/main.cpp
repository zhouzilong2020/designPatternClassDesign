#include <iostream>
#include "Stadium.h"
#include "SportsGround.h"
using namespace std;

int main(int argc, char* argv[])
{
    Stadium& stadium = Stadium::get_instance();
    stadium.cleanStadium();
    stadium.openStadium();
    SportsGround& sportsGround = SportsGround::get_instance();
    sportsGround.prepareSportsGround();
    sportsGround.openSportsGround();

    Stadium& stadium_2 = Stadium::get_instance();
    SportsGround& sportsGround_2 = SportsGround::get_instance();

    return 0;
}