#include "pch.h"
#include <iostream>
#include <limits>
#include <string>
//#include "io.h"
using namespace std;

// ***** 

// Q1.
 
// Write a single-file program (named main.cpp) that reads two separate integers from the user, adds them together, and then outputs the answer. The program should use three functions:

	//A function named “readNumber” should be used to get(and return) a single integer from the user.
	//A function named “writeAnswer” should be used to output the answer.This function should take a single parameter and have no return value.
	//A main() function should be used to glue the above functions together.
 
//  ***** 
 

//int readNumber(bool first) {
//
//    string Instructions;
//
//    if (first == true)
//    {
//        Instructions = "Enter your first numerical value to be added: ";
//    }
//    else
//    {
//        Instructions = "Enter your next numerical value to be added: ";
//    }
//
//    cout << Instructions;
//    int x{};
//    std::cin >> x;
//
//    return x;
//}
//
//void writeAnswer(int y)
//{
//    cout << "The total sum equates to " << y << '\n';
//}
//
//int main()
//{
//    int a{ readNumber(true) };
//    int b{ readNumber(false) };
//    writeAnswer(a + b); // using operator+ to pass the sum of x and y to writeAnswer()
//    return 0;
//}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ***** 

// Q2.

//Modify the program you wrote in exercise #1 so that readNumber() and writeAnswer() live in a separate file called “io.cpp”.Use a forward declaration to access them from main().
//If you’re having problems, make sure “io.cpp” is properly added to your project so it gets compiled.

//  ***** 

//int readNumber(bool first);
//void writeAnswer(int x);
//
//int main()
//{
//    int x{ readNumber(true) };
//    int y{ readNumber(false) };
//    writeAnswer(x + y);
//    return 0;
//}

// ***** *Added io.cpp* ***** //

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ***** 

// Q3.

//Modify the program you wrote in #2 so that it uses a header file(named io.h) to access the functions instead of using forward declarations directly in your code(.cpp) files.Make sure your header file uses header guards.

//  ***** 

// ***** *Added io.h* ***** //

//#ifndef IO_H
//#define IO_H
//
//int readNumber(bool first);
//void writeAnswer(int x);
//
//#endif

// ***** *Modified Main.cpp* ***** //

//#include "io.h"


