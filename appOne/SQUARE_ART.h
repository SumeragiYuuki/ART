#pragma once
#include "ART.h"
class SQUARE_ART :
    public ART
{
    int MaxCnt = 0;
    int Cnt = 0;
    class SQUARE* Square = 0;
public:
    SQUARE_ART();
    ~SQUARE_ART();
    void perform();
};

