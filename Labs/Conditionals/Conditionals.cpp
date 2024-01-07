
#include <iostream>

int main()
{
    std::cout << "F2C!\n----------------------\n";

    float f = 32;
    while (f <= 212)
    {
        float c = (f - 32) * 5.0f / 9.0f;
        std::cout << "Fahrenheit: " << f << " Celsius: " << c << "\n";
        f += 2;
    }

    return 0;
}
