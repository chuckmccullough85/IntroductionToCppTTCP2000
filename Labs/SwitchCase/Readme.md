## Overview
Get to know the switch/case statement.

| | |
| --------- | --------------------------- |
| Exercise Folder | SwitchCase |
| Builds On | None |
| Time to complete | 20 minutes

Create a new console application for this lab.
**Visual Studio**
1. Right click on the solution and choose *Add/New Project*
2. Select the *Console Application (Hello World)* template

**VS Code**

3. Create a new folder named *SwitchCase*
4. Add a file *main.cpp* to the folder

Paste the following code over the top of your existing main:

This code prompts the user to enter a number.  Add a switch case to output which choice the user made using a switch/case. 

```cpp
#include <iostream>

int main() {
    int choice;

    std::cout << "Enter a number between 1 and 3: ";
    std::cin >> choice;
}
```	

---

:::spoiler
```c++
#include <iostream>

int main() {
    int choice;

    std::cout << "Enter a number between 1 and 3: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "You entered 1." << std::endl;
            break;
        case 2:
            std::cout << "You entered 2." << std::endl;
            break;
        case 3:
            std::cout << "You entered 3." << std::endl;
            break;
        default:
            std::cout << "Invalid choice." << std::endl;
            break;
    }

    return 0;
}

```