#include "pch.h"
#include <iostream>


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ***** Early return statements ***** //

//int abs(int x)
//{
//    if (x < 0)
//        return -x; // early return (only when x < 0)
//
//    return x;
//}
//
//int main()
//{
//    std::cout << abs(4) << '\n'; // prints 4
//    std::cout << abs(-3) << '\n'; // prints 3
//
//    return 0;
//}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ***** Further Enhanced If-Else statements utilizing 'else-if' statements to chain if-else conditions together ***** //

//int main()
//{
//    std::cout << "Enter an integer: ";
//    int x{};
//    std::cin >> x;
//
//    if (x > 0)
//        std::cout << "The value is positive\n";
//    else if (x < 0)
//        std::cout << "The value is negative\n";
//    else
//        std::cout << "The value is zero\n";
//
//    return 0;
//}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ***** Improved If-Else statements based on the if-statement options below ***** //
 
//int main()
//{
//    std::cout << "Enter an integer: ";
//    int x{};
//    std::cin >> x;
//
//    if (x == 0)
//        std::cout << "The value is zero\n";
//    else
//        std::cout << "The value is non-zero\n";
//
//    return 0;
//}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ***** If statements that display different messages depending if the input is zero ***** //

//int main()
//{
//    std::cout << "Enter an integer: ";
//    int x{};
//    std::cin >> x;
//
//    bool zero{ (x == 0) };
//    if (zero)
//        std::cout << "The value is zero\n";
//    if (!zero)
//        std::cout << "The value is non-zero\n";
//
//    return 0;
//}

// ********** OR ********** //

//int main()
//{
//    std::cout << "Enter an integer: ";
//    int x{};
//    std::cin >> x;
//
//    if (x == 0)
//        std::cout << "The value is zero\n";
//    if (x != 0)
//        std::cout << "The value is non-zero\n";
//
//    return 0;
//}