## Overview
Demonstrate polymorphism by creating a function that processes any type of `HumanResource` object.

| | |
| --------- | --------------------------- |
| Exercise Folder | Polymorphism |
| Builds On | Inheritance |
| Time to complete | 30 minutes

We continue with the inheritance example from the previous exercise.


### Steps

1. Add a new .cpp file to the project named *PayrollProcessor.h*
1. Define a new function in namespace `payroll` 
    `float CalculatePayroll(initializer_list<HumanResource *> emps)`
1. The function should return the total payroll for all employees in the list.
1. Implement the loop in the method and return the total payed
1. In *main.cpp* call the function with a list of a mix of `Employee` and `Contractor` pointers.
1. Run the program and verify the total payroll is correct.


Things to think about:
The function `CalculatePayroll` only has dependency on `HumanResource` and not on `Employee` or `Contractor`.  This is an example of polymorphism.  The function can process any type of `HumanResource` object.  This is a powerful concept in object oriented programming.  It allows us to write code that is more generic and reusable.  It also allows us to write code that is more flexible and extensible.  We can add new types of `HumanResource` objects without having to change the `CalculatePayroll` function.  This is a good example of the Open/Closed principle.  The function is open to extension but closed to modification.

