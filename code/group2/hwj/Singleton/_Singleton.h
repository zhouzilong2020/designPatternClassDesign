#include <iostream>
#include "Stadium.h"
#include "SportsGround.h"
using namespace std;

namespace _Singleton
{
    void run()
    {
        //创建体育馆与运动场实例
        Stadium& stadium = Stadium::get_instance();
        SportsGround& sportsGround = SportsGround::get_instance();
        //无法再次创建
        Stadium& stadium_2 = Stadium::get_instance();
        SportsGround& sportsGround_2 = SportsGround::get_instance();
        //程序退出时自动释放
    }
}