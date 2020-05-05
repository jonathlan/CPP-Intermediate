#include "math.h"
#include <iostream>

int MyNS::math::pow(int base, int exp)
{
    std::cout << "Inside My pow implementation" << std::endl;
    int result = 1;

    for (int i = 0; i < exp; i++)
    {
        result = result * base;
    }

    return result;
}
