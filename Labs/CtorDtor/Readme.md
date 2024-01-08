## Overview
Let's expand *Temperature* to include constructors and destructors

| | |
| --------- | --------------------------- |
| Exercise Folder | CtorDtor |
| Builds On | [First Class](../FirstClass) |
| Time to complete | 45 minutes

---

To make a class robust and complete, we should add constructors and destructors.  These are special methods that are called when an object is created and destroyed.  They are used to initialize and clean up the object.

### Steps
1. Add a constructor to the *Temperature* class.  The constructor should take a single parameter, the temperature in Celsius.  Use an initializer list to initialize the member variable.  Set the default value of the parameter to 0.  Example: ```Temperature(float celsius = 0.0f)```
1. Add a function in the class to return a string representation of the temperature.  The string should contain the temperature in all three scales.  Example: ```string toString()```.  Consider using an `ostringstream` to build the string.
1. Add a destructor to the *Temperature* class.  The destructor should print a message to the console that includes the `toString()` result.  Example: ```~Temperature()```


### Scale Enum

Let's create a type to represent the scale of a temperature.  We could use letters (char) 'C', 'F', 'K', but that would be error prone.  Instead, let's create an enum to represent the scale.

1. Add an enum to the *Temperature* class in the public section.  The enum should be called *Scale* and have the values *Celsius*, *Fahrenheit*, and *Kelvin*.
1. Create another overloaded constructor in the *Temperature* class.  This constructor should take two parameters, the temperature and the scale.  
1. In the body of the constructor, use a switch statement to set the member variable based on the scale parameter. 
1. Rework the first constructor to use the new constructor. 


### Testing

Update main to create temps using the various constructors. Use the `toString()` method to print the temps.