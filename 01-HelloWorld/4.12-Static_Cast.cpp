#include "pch.h"
#include <iostream>


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ***** Example of static_cast being used to convert Char (ASCII-code)-to-Int ***** //

int main()
{
	char ch{ 97 }; // 97 is ASCII code for 'a'
	std::cout << ch << " has value " << static_cast<int>(ch) << '\n'; // print value of variable ch as an int

	return 0;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ***** Example of static_cast being used to convert double-to-Int ***** //

//void print(int x)
//{
//	std::cout << x << '\n';
//}
//
//int main()
//{
//	print(static_cast<int>(5.5)); // explicitly convert double value 5.5 to an int
//
//	return 0;
//}