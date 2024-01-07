## Overview

In this lab, we create a library of temperature conversion functions. 

| | |
| --------- | --------------------------- |
| Exercise Folder | F2CFunction |
| Builds On | Conditionals |
| Time to complete | 30 minutes

---

Let's create a new console application project named *F2CFunction*.

1. Add new files to the project named *Temperature.h* and *Temperature.cpp*
  * In Visual Studio, right click on the project and choose *Add/New Item*.  Select .h, repeat for .cpp
2. In *Temperature.h*, add the following function declarations:

```c++
float f2c(float fahrenheit);
float f2k(float fahrenheit);
float c2f(float celsius);
float c2k(float celsius);
float k2f(float kelvin);
float k2c(float kelvin);
```

3. In *Temperature.cpp*, implement the 6 functions.
  * the formula for c to f is ```celcius * 9.0 / 5.0 + 32```
  * the formulat for c to k is ```celcius - 273.15```
  * Don't repeat yourself.  Use the functions you've already written.
4. Modify *main* to use the conversion functions (display F, C, and K).
    * Add a few lines after the loop to call the conversion functions we haven't used yet to verify that they work correctly.


*main*
```cpp
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
        else if (f>115) std::cout << " hot" << std::endl;
        else std::cout << std::endl;
        
        f += 2;
    }
    return 0;
}
```

