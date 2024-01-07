// F2CFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Temperature.h"

int main()
{
    float f = 32;
    float c = 0;
    while (f <= 212)
    {
        c = f2c(f);
        float k = f2k(f);
        std::cout << c << "c " << k << "k " << f << "f";
        if (f < 40) std::cout << " cold" << std::endl;
        else if (f > 115) std::cout << " hot" << std::endl;
        else std::cout << std::endl;

        f += 2;
    }
    return 0;
}