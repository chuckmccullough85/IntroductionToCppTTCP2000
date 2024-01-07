#include <iostream>
#include "Temperature.h"

using namespace std;
using namespace utility::temperature;
int main()
{
    for (float f = 32; f <= 212; f += 2)
    {
        Temperature t;
        t.fahrenheit = f;
        fromFahrenheit(&t);
        cout << t.celsius << "c " << t.kelvin << "k "
            << t.fahrenheit << "f" << endl;
    }
    return 0;
}