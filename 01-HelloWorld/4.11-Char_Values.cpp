#include "pch.h"
#include <iostream>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ***** \’ prints a single quote	***** //
// ***** \” prints a double quote	***** //
// ***** \\ prints a backslash		***** //

//int main()
//{
//    std::cout << "\"This is quoted text\"\n";
//    std::cout << "This string contains a single backslash \\\n";
//    std::cout << "6F in hex is char '\x6F'\n";
//    return 0;
//}



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ***** "\" is known as a escape sequence. "\t" is used to print values with a horizontal-tab applied ***** //

//int main()
//{
//    std::cout << "First part\tSecond part";
//    return 0;
//}



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ***** "\" is known as a escape sequence. "\n" is used to print values onto a newline ***** //

//int main()
//{
//    int x{ 5 };
//    std::cout << "The value of x is: " << x << '\n'; // standalone \n goes in single quotes
//    std::cout << "First line\nSecond line\n";        // \n can be embedded in double quotes
//    return 0;
//}



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ***** Output is 'a' followed by 'b' since char only takes 1-character value ***** //

//int main()
//{
//    std::cout << "Input a keyboard character: "; // assume the user enters "abcd" (without quotes)
//
//    char ch{};
//    std::cin >> ch; // ch = 'a', "bcd" is left queued.
//    std::cout << "You entered: " << ch << '\n';
//
//    // Note: The following cin doesn't ask the user for input, it grabs queued input!
//    std::cin >> ch; // ch = 'b', "cd" is left queued.
//    std::cout << "You entered: " << ch << '\n';
//
//    return 0;
//}