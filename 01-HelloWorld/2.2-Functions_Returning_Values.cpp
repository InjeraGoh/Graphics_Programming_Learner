#include "pch.h"
#include <iostream>
#include <limits>
#include <string>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ***** REUSABLE INTEGER FUNCTION ***** //

//int getValueFromUser()
//{
//    std::cout << "Enter an integer: ";
//    int input{};
//    std::cin >> input;
//
//    return input;
//}
//
//int main()
//{
//    int x{ getValueFromUser() }; // first call to getValueFromUser
//    int y{ getValueFromUser() }; // second call to getValueFromUser
//
//    std::cout << x << " + " << y << " = " << x + y << '\n';
//
//    return 0;
//}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//int getValueFromUser() // this function now returns an integer value
//{
//	std::cout << "Enter an integer: ";
//	int input{};
//	std::cin >> input;
//
//	return input; // return the value the user entered back to the callerx`
//}
//
//int main()
//{
//	int num{ getValueFromUser() }; // initialize num with the return value of getValueFromUser()
//
//	std::cout << num << " doubled is: " << num * 2 << '\n';
//
//	return 0;
//}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
// ***** WILL ALWAYS RETURN 0 SINCE INPUT FROM getValueFromUser() IS NEVER PASSED BACK TO MAIN DUE TO VOID-FUNCTION BEING 1-WAY ***** //

//void getValueFromUser()
//{
//	std::cout << "Enter an integer: ";
//	int input{};
//	std::cin >> input;
//}
//
//int main()
//{
//	getValueFromUser(); // Ask user for input
//
//	int num{}; // How do we get the value from getValueFromUser() and use it to initialize this variable?
//
//	std::cout << num << " doubled is: " << num * 2 << '\n';
//
//	return 0;
//}