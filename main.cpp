#include <iostream>
#include <assert.h>
#include "ColorPair.h"
#include "ColorPairEnum.h"

void testNumberToPair(int pairNumber,
    MajorColor expectedMajor,
    MinorColor expectedMinor)
{
    TelCoColorCoder::ColorPair colorPair =
        TelCoColorCoder::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber(
    MajorColor major,
    MinorColor minor,
    int expectedPairNumber)
{
    int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}

void displayPairMap()
{
    std::cout << "Pair No" << " - " << "Color" << std::endl;
   for (int number = 1; number <= 25; number++)
   {
     TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(number);
     std::cout << number << " - " << colorPair.ToString() << std::endl;
   }
}

int main()
{
    displayPairMap();
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    return 0;
}
