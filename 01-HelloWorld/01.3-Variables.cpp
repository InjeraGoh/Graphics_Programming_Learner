#include "pch.h"
#include <iostream>
#include <limits>

int a, b = 0;
double c = 0;

int main()
{
    std::cin.clear();                                                       // Read any error flags
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');     // Ignore any characers in the input buffer until we find an enter
    std::cin.get();                                                         // Get one more character from the user

    std::cout << "Hello world!" << std::endl;

    return 0;
}