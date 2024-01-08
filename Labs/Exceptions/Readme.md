## Overview

Let's add error checking to our *payroll* project.

| | |
| --------- | --------------------------- |
| Exercise Folder | Exceptions |
| Builds On | Polymorphism |
| Time to complete | 30 minutes


This lab is a continuation of the *Polymorphism* lab.

One of the most important aspects of programming is error checking. Objects should never be in an invalid state.  This is why our fields are private and we utilize getters and setters to access the information.

### Steps
1. In *HumanResourc.h*, `#include <stdexcept>` and `<regex>`. 
1. In `setSalary`, check to see if the salary parameter is less than 50.  If so, do not assign to the field, instead, throw an `invalid_argument` exception with the message "Salary must be at least 50".
1. Modify the constructor to call `setSalary` instead of assigning to the field directly.
1. In the constructor, check the name parameter for legal characters using a regular expression.
    * here's a sample:

```cpp
regex namePattern("^[A-Za-z .']+$");
if (!regex_match(name, namePattern))
	throw invalid_argument("Name contains illegal characters");
```

5. In *main.cpp*, add a try/catch block around the entire main function.  Display the error message to the console if an exception is thrown.  Intentionally cause an exception to be thrown by passing an invalid name or salary to the constructor.