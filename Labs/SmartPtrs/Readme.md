## Overview

Create an example of a memory leak and correct it with smart pointers.


| | |
| --------- | --------------------------- |
| Exercise Folder | SmartPtr |
| Builds On | [Const](../Const) |
| Time to complete | 30 minutes

Building on the *Const* exercise (code is provided), create a memory leak and then correct it with smart pointers.

### Steps

1. Modify the code in main to allocate the *Temperature* and *Sphere* objects with **new**.  Do not delete them.
    1. When you run, notice that the destructors are not called.
1. Add a `#include <memory>` to the top of the file.
1. Change the type of the *Temperature* and *Sphere* variables to be `std::unique_ptr<Temperature>` and `std::unique_ptr<Sphere>`.
1. Now, when you run, notice that the destructors are called.
1. Create a *shared pointer* for a couple of objects.
1. Create a nested scope in main and create duplicates of the shared pointers.
    1. Notice that the destructors are not called at the end of the nested scope.
    1. How can you demonstrate a weak pointer?