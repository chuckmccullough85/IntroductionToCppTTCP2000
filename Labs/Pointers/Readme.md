## Overview

Pointers, pointers, pointers!

| | |
| --------- | --------------------------- |
| Exercise Folder | Pointers |
| Builds On | None |
| Time to complete | 45 minutes

1. Create a new console application in your current solution named *Pointers*
2. Replace *main* with the following code:
3. Follow the **TODO** comments and implement the code

```cpp
#include <iostream>

// Function to demonstrate pass by value
void passByValue(int num) {
    //TODO - Set the value of num to 10
}

// Function to demonstrate passing pointers
void passByPointer(int* numPtr) {
    // TODO - Set the value of num to 12
}

int main() {
    int num = 5;

    // Pass by value
    // TODO - Call passByValue, passing in num and display num after the call
    
    // Pass by pointer
    // TODO - Call passByPointer, passing in num's address and display num after the call

    return 0;
}

```

4. Define a struct named *Person* (before main) with the following members:
    * *name* - string
    * *age* - int
    * *address* - string
5. Create a new function named *showPerson* that takes a pointer to a *Person* and displays the person's name, age, and address.
1. In *main*, create a new *Person* and set the values of the members
1. Pass the person into the *showPerson* function
1. Run the program and verify the output
1. Create a new function named clearArray that takes an array of int and the size of the array and sets each element to 0
1. In *main*, create an array of 5 ints and set each element to a different value
1. Pass the array into the *clearArray* function
1. Display the values of the array
1. Run the program and verify the output