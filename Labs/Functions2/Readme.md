## Overview

In this lab, we expand the options for temperature conversion.

| | |
| --------- | --------------------------- |
| Exercise Folder | F2CFunction2 |
| Builds On | F2CFunctions |
| Time to complete | 30 minutes

---

### Inline

In this exercise, we will relocate the conversion functions to the header file and make them inline.  This only impacts performance - there should be no other noticeable effect.

1. Cut all the functions in *Temperature.cpp* onto the clipboard.
2. Delete the function declarations in *Temperature.h* (optional !!!).
3. Paste the function definitions (from .cpp) into the .h file.
4. Build - you probably get a bunch of linker errors about duplicate functions.
5. Insert ```inline``` in front of each function declaration.

-- Note - Since the function *definition* is doubling as the forward declaration, the functions that call other functions need to be defined *after* the functions they are calling!

### Structure Pointers

Next, we will define a structure to hold all 3 temperature scales.  We will add some new functions to fill in the structure from a known temperature.

1. Define a new type (struct) named *Temperature* that contains 3 floats - C, F, K.
2. Define the following functions at the bottom of *Temperature.h*:
3. Update *main* to use the ```fromFahrenheit``` function

```cpp
inline void fromFahrenheit(Temperature* t)
{
  // TODO - fill in celsius and kelvin fields
}

inline void fromCelsius(Temperature* t)
{
  // TODO - fill in the fahr and kelvin fields
}

inline void fromKelvin(Temperature* t)
{
  // TODO - fill in the fahr and cels fields
}
```