#include <iostream>
#include "Stadium.h"
#include "SportsGround.h"
using namespace std;

namespace _Singleton
{
    void run()
    {
        //�������������˶���ʵ��
        Stadium& stadium = Stadium::get_instance();
        SportsGround& sportsGround = SportsGround::get_instance();
        //�޷��ٴδ���
        Stadium& stadium_2 = Stadium::get_instance();
        SportsGround& sportsGround_2 = SportsGround::get_instance();
        //�����˳�ʱ�Զ��ͷ�
    }
}