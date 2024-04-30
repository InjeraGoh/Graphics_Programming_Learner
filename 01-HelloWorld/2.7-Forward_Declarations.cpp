#include "pch.h"
#include <iostream>
#include <limits>
#include <string>


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ***** int add(int x, int y) IS A FORWARD DECLARATION TO NOTIFY THE PROGRAM ABOUT THE add() FUNCTION BEFORE main() ***** //

//int add(int x, int y); // forward declaration of add() (using a function declaration)
//
//int main()
//{
//    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // this works because we forward declared add() above
//    return 0;
//}
//
//int add(int x, int y) // even though the body of add() isn't defined until here
//{
//    return x + y;
//}