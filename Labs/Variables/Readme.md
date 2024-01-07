## Overview
Create a simple program that declares and initializes variables of different intrinsic types.  Display the value of each variable.

| | |
| --------- | --------------------------- |
| Exercise Folder | Variables |
| Builds On | First Project |
| Time to complete | 20 minutes

* Within main, declare several variable of different types
* Set/modify each variables value
* Display the value of each variable 

## Steps
- Continue with the project created in the previous exercise
- Declare several variables of different types
- Set/modify each variables value
- Display the value of each variable using `std::cout`
- Peek at the solution below if you get stuck


---


```cpp
#include <iostream>

int main() {
    // Declare variables of different intrinsic types
    int myInt = 42;
    float myFloat = 3.14;
    double myDouble = 2.71828;
    char myChar = 'A';
    bool myBool = true;

    // Display the values of the variables
    std::cout << "myInt: " << myInt << std::endl;
    std::cout << "myFloat: " << myFloat << std::endl;
    std::cout << "myDouble: " << myDouble << std::endl;
    std::cout << "myChar: " << myChar << std::endl;
    std::cout << "myBool: " << myBool << std::endl;

    return 0;
}
```
