
#include <iostream>

int main()
{
    std::cout << "F2C!\n";

    float f = 93;
    float c = 0;

    c = (f - 32) * 5.0f / 9.0f;
    std::cout << "Fahrenheit: " << f << " Celsius: " << c << "\n";

    f = 212;
    c = (f - 32) * 5.0f / 9.0f;
    std::cout << "Fahrenheit: " << f << " Celsius: " << c << "\n";

    f = 32;
    c = (f - 32) * 5.0f / 9.0f;
    std::cout << "Fahrenheit: " << f << " Celsius: " << c << "\n";

    f = -40;
    c = (f - 32) * 5.0f / 9.0f;
    std::cout << "Fahrenheit: " << f << " Celsius: " << c << "\n";

    return 0;
}
