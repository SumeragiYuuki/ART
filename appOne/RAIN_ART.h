#pragma once
#include "ART.h"
class RAIN_ART :
    public ART
{
    int Num = 0;
    class RAIN* Rains = nullptr;
public:
    RAIN_ART();
    ~RAIN_ART();
    void perform();
};

