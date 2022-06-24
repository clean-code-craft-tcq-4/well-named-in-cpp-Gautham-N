#include <iostream>
#include "ColorPair.h"
#include "ColorPairEnum.h"
#include "testColorPair.h"



int main()
{
     testColorPair testColorPairObj;
    testColorPairObj.displayPairMap();
    testColorPairObj.testNumberToPair(4, WHITE, BROWN);
    testColorPairObj.testNumberToPair(5, WHITE, SLATE);

    testColorPairObj.testPairToNumber(BLACK, ORANGE, 12);
    testColorPairObj.testPairToNumber(VIOLET, SLATE, 25);
    return 0;
}
