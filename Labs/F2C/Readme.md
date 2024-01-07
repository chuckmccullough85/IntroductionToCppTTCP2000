## Overview
This lab demonstrates basic C++ operators.

| | |
| --------- | --------------------------- |
| Exercise Folder | F2C |
| Builds On | None |
| Time to complete | 30 minutes
 
---

### Steps

* Create a new project called F2C in your current solution
    * Right click on the solution and select *Add -> New Project*
    * Select Console Application
    * Name it *F2C*
    * Right clidk on the project and select Set as Startup Project

* In main, write some code to convert temperatures
    * declare a float variable named f and initialize it to 93
    * declare a float variable named c and initialize it to 0
    * write an expression to convert f to c and assign it to c
    * print the value of both f & c to the console
* Add lines to change the value of f to several different values, convert then print the results.


The formula is ```(f - 32) * 5.0 / 9.0```


### Challenge

* What happens if the formula is changed to ```(f - 32) * 5 / 9```?
    * What are the results and why?
* What is the difference between ```5.0```, ```5.0f``` and ```5```?
