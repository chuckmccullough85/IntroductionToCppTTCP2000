## Overview
Create a program that prints a temperature scale!

| | |
| --------- | --------------------------- |
| Exercise Folder | ForLoop |
| Builds On | F2C |
| Time to complete | 20 minutes

Continuing with F2C, create a for loop to calculate F -> C for all temperatures from freezing to boiling!
 
### Steps
* Remove the 2 float declarations, f and c
* Add a for loop just before the first calculation of c
    * declare a float variable f in the initialization part of the for loop
    * set the condition to f <= 212
    * increment f in the increment part of the for loop
* Put the calculation and the cout statement inside the for loop block {}
* Add ```float``` in front of the ```c``` in the calculation since it is now declared inside the for loop
* Delete the remainder of the code after the for loop
    * Leave ```return 0;``` at the end of the main function
* Run the program and verify the output


*Partial Output*
```
F2C!
----------------------
Fahrenheit: 32 Celsius: 0
Fahrenheit: 33 Celsius: 0.555556
Fahrenheit: 34 Celsius: 1.11111
Fahrenheit: 35 Celsius: 1.66667
Fahrenheit: 36 Celsius: 2.22222
Fahrenheit: 37 Celsius: 2.77778
Fahrenheit: 38 Celsius: 3.33333
Fahrenheit: 39 Celsius: 3.88889
Fahrenheit: 40 Celsius: 4.44444
Fahrenheit: 41 Celsius: 5
Fahrenheit: 42 Celsius: 5.55556
Fahrenheit: 43 Celsius: 6.11111
Fahrenheit: 44 Celsius: 6.66667
Fahrenheit: 45 Celsius: 7.22222
Fahrenheit: 46 Celsius: 7.77778
Fahrenheit: 47 Celsius: 8.33333
Fahrenheit: 48 Celsius: 8.88889
```