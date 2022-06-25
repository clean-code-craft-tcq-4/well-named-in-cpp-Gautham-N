#include "DisplayOutput.h"

void DisplayOutput::displayPairMap()
{
    std::cout << "Pair No" << " - " << "Color" << std::endl;
    for (int number = 1; number <= 25; number++)
    {
        TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(number);
        std::cout << number << " - " << colorPair.ToString() << std::endl;
    }
}
