// composite.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "Component.h"
#include "Referee.h"
#include "Competitor.h"
#include <iostream>
#include "Candidates.h"
using namespace std;
int main()
{
    Candidates aaa;
    Competitor lili("Tom", "rabbit", "Female", 25);
    Competitor bbbb("Tony", "tiger", "Male", 22);
    Referee cccc("Sam", "lion", "Male", 25);
    aaa.add(&lili);
    aaa.add(&bbbb);
    aaa.add(&cccc);
    aaa.remove("Tom");
    aaa.getChild();
    getchar();
}

