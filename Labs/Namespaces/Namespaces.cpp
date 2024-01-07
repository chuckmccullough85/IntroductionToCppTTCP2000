#include <iostream>
#include "Temperature.h"

int main()
{
    for (float f = 32; f <= 212; f += 2)
    {
        Temperature t;
        t.fahrenheit = f;
        fromFahrenheit(&t);
        std::cout << t.celsius << "c " << t.kelvin << "k "
            << t.fahrenheit << "f" << std::endl;
    }
    return 0;
}