#include "pch.h"
#include <iostream>
#include <limits>
#include <string>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ***** #if0 == Exclude a block of code from being compiled ***** //
// ***** #if1 == Include a block of code from being compiled (1 == True, 0 == False) ***** //
// ***** Only 'Joe' is printed, not 'Bob' or 'Steve' ***** //

//#include <iostream>
//
//int main()
//{
//    std::cout << "Joe\n";
//
//#if 0 // Don't compile anything starting here
//    std::cout << "Bob\n";
//    std::cout << "Steve\n";
//#endif // until this point
//
//    return 0;
//}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ***** #ifdef == If Defined ***** //
// ***** #if defined(PRINT_BOB) == If Defined ***** //
//  
// 
// ***** #ifndef == If NOT Defined ***** //
// ***** #if !defined(PRINT_BOB) == If NOT Defined ***** //
// 
// 
// ***** #ifdef + 'non-existent declaration' == Excluded from pre-processing ***** //
// THIS TYPE OF MACRO-DEFINITION WILL ONLY EXIST WITHIN THE SAME FILE ITSELF (e.g. main.cpp PRINT_JOE can only be read and used within it's own file)


//#define PRINT_JOE
//
//int main()
//{
//#ifdef PRINT_JOE
//    std::cout << "Joe\n"; // will be compiled since PRINT_JOE is defined
//#endif
//
//#ifndef PRINT_BOB
//    std::cout << "Bob\n"; // Prints “Bob” because PRINT_BOB was never #defined
//#endif
//
//#ifdef PRINT_BOB
//    std::cout << "Bob\n"; // will be excluded since PRINT_BOB is not defined
//#endif
//
//    return 0;
//}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ***** The #define directive can be used to create a macro ***** //
// ***** A macro is a rule that defines how input text is converted into replacement output text. ***** //
// ***** When the preprocessor encounters this directive, any further occurrence of the identifier is replaced by substitution_text. ***** //
 
//  
//#define MY_NAME "Alex"
//
//int main()
//{
//    std::cout << "My name is: " << MY_NAME << '\n';
//
//    return 0;
//}