#include <iostream>
#include "testColorPair.h"
#include "DisplayOutput.h"

int main()
{
    testColorPair testColorPairObj;
    DisplayOutput DisplayOutputObj;
    DisplayOutputObj.displayPairMap();
    testColorPairObj.testNumberToPair(4, WHITE, BROWN);
    testColorPairObj.testNumberToPair(5, WHITE, SLATE);

    testColorPairObj.testPairToNumber(BLACK, ORANGE, 12);
    testColorPairObj.testPairToNumber(VIOLET, SLATE, 25);
    return 0;
}
