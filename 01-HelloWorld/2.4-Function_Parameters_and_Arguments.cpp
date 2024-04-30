
#include "pch.h"
#include <iostream>
#include <limits>
#include <string>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ***** V2 - SIMPLIFIED & COMBINED VERSIONS OF EXTERNAL FUNCTIONS ***** //

//int getValueFromUser()
//{
//	std::cout << "Enter an integer: ";
//	int input{};
//	std::cin >> input;
//
//	return input;
//}
//
//void printDouble(int value)
//{
//	std::cout << value << " doubled is: " << value * 2 << '\n';
//}
//
//int main()
//{
//	printDouble(getValueFromUser());
//
//	return 0;
//}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ***** SEPARATE FUNCTIONS FOR GETTING VALUES AND PRINTING VALUES ***** //
 
//int getValueFromUser()
//{
//	std::cout << "Enter an integer: ";
//	int input{};
//	std::cin >> input;
//
//	return input;
//}
//
//void printDouble(int value) // This function now has an integer parameter
//{
//	std::cout << value << " doubled is: " << value * 2 << '\n';
//}
//
//int main()
//{
//	int num{ getValueFromUser() };
//
//	printDouble(num);
//
//	return 0;
//}