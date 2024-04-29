#include "pch.h"
#include <iostream>
#include <limits>
using namespace std;


class variable_intro
{

    int d{ 4 };         // Direct-List Initialization   
    int e = { 5 };      // Copy-List Initialization
    int f{};            // Value Initialization

    double c = 0;       // Copy Initialization

    string rand = "";   // Default Initialization
    int a = 1;
    int b = 2;

    char g;

    [[maybe_unused]] double pi{ 3.14159 };
    [[maybe_unused]] double gravity{ 9.8 };
    [[maybe_unused]] double phi{ 1.61803 };

    //std::cout << a << std::endl;
    //std::cout << b << std::endl;

    //return 0;
};