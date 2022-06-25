#include "DisplayOutput.h"

void DisplayOutput::displayPairMap()
{
    std::cout << "Pair No" << " - " << "Color" << std::endl;
    int ColorPairMapCnt = 25;
    for (int number = 1; number <= ColorPairMapCnt; number++)
    {
        TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(number);
        std::cout << number << " - " << colorPair.ToString() << std::endl;
    }
}
