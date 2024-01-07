
#include <iostream>

int main()
{
    std::cout << "F2C!\n----------------------\n";


    for (float f = 32; f <= 212; f++)
    {
        float c = (f - 32) * 5.0f / 9.0f;
        std::cout << "Fahrenheit: " << f << " Celsius: " << c << "\n";
    }

    return 0;
}
