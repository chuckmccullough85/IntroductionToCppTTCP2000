#include <iostream>

//Part 2: include the header files
#include "myinclude.h"
#include "anotherInclude.h"

// Part 1: declare a global variable
int myGlobalVar;

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
    
    // Part 1: display the value of the global variable
    std::cout << "myGlobalVar: " << myGlobalVar << std::endl;
    return 0;
}