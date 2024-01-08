## Overview

Use this simple lab to demonstrate the use of initializer lists in C++.

| | |
| --------- | --------------------------- |
| Exercise Folder | InitializerList |
| Builds On | none |
| Time to complete | 30 minutes

### Steps
1. Create a new project in Visual Studio called InitializerList.
1. Before the function *main*, define a function named *printList* that takes an initializer_list as a parameter. The function should print the contents of the list to the console.
1. In *main*, use the {} syntax to create an initializer list of integers. Pass the list to the *printList* function.

### Extra Credit
1. Create an overload of the *printList* function that takes an *initializer_list* of any type of object. The function should print the contents of the list to the console.

C++ will choose the most specific function when regular functions and templates are overloaded! This is called **template specialization**.


