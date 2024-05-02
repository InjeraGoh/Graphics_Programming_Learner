#include "pch.h"
#include <iostream>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ***** Boolean functions that reads '==' along with integer values to return 'true' or 'false' terms directly ***** //

// returns true if x and y are equal, false otherwise
//bool isEqual(int x, int y)
//{
//    return x == y; // operator== returns true if x equals y, and false otherwise
//}

//int main()
//{
//    std::cout << "Enter an integer: ";
//    int x{};
//    std::cin >> x;
//
//    std::cout << "Enter another integer: ";
//    int y{};
//    std::cin >> y;
//
//    std::cout << std::boolalpha; // print bools as true or false
//
//    std::cout << x << " and " << y << " are equal? ";
//    std::cout << isEqual(x, y) << '\n'; // will return true or false
//
//    return 0;
//}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ***** std::boolalpha allows the program to accept 'true' as inputs (IN LOWER CASE ONLY) ***** //
 
//int main()
//{
//	bool b{};
//	std::cout << "Enter a boolean value: ";
//
//	// Allow the user to enter 'true' or 'false' for boolean values
//	// This is case-sensitive, so True or TRUE will not work
//	std::cin >> std::boolalpha;
//	std::cin >> b;
//
//	std::cout << "You entered: " << b << '\n';
//
//	return 0;
//}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ***** std::boolalpha converts 1's and 0's to 'True' or 'False' ***** //

//int main()
//{
//    std::cout << true << '\n';
//    std::cout << false << '\n';
//
//    std::cout << std::boolalpha; // print bools as true or false instead of 1 & 0'S
//
//    std::cout << true << '\n';
//    std::cout << false << '\n';
//    return 0;
//}