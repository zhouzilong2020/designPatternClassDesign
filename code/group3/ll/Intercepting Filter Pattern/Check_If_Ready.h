#pragma once
#include "Filter.h"

class Check_If_Ready :public Filter
{
public:
    void execute(string order);
};

