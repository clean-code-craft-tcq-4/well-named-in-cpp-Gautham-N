#pragma once
#include "ColorPair.h"
#include "ColorPairEnum.h"
class testColorPair
{
public:
    void displayPairMap();

    void testNumberToPair(int pairNumber,
        MajorColor expectedMajor,
        MinorColor expectedMinor);

    void testPairToNumber(
        MajorColor major,
        MinorColor minor,
        int expectedPairNumber);
};

