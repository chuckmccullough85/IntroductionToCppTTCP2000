## Overview
Create a hierarchy of classes that represent different types of human resources.  The base class is `HumanResource`

| | |
| --------- | --------------------------- |
| Exercise Folder | Inheritance |
| Builds On | none |
| Time to complete | 45 minutes

First, review the class `HumanResource`.  A `HumanResource` has a name and a salary.  It also has a method `getSalary()` that returns the salary.  The name is set in the constructor and cannot be changed (no setName() method).  The salary can be changed with the `setSalary()` method.

The class also has a function `float pay()` that returns the net pay after taxes and other deductions.  The default implementation returns the 0.  This function will be overridden in the derived classes.

### Steps
1. Define a class named `Employee` that inherits from `HumanResource`.  Override the `pay()` method to return the salary minus 10% for taxes.
1. Define a class named 'Contractor` that inherits from `HumanResource`.  Override the `pay()` method to return the salary minus a fixed $10 fee for processing.

### Testing
In `main()`, create some instances of `Employee` and `Contractor` and call the `pay()` method on each.  Verify that the results are correct.



