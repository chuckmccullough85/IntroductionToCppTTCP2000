## Overview
Update `Temperature` to be const correct and create a new class!

| | |
| --------- | --------------------------- |
| Exercise Folder | Const |
| Builds On | [CtorDtor](../CtorDtor) |
| Time to complete | 45 minutes


### Const Correctness

First, let's update our `Temperature` class to be const correct.  This means that we will be able to use `const` objects of the class and call `const` member functions on them.  We will also be able to use `const` references to objects of the class.

#### Const Member Functions
* Update all non-mutating member functions to be const member functions.
* Note that a const `toString` will  have errors until the `as...` functions are const as well.


### Sphere
Now, let's create a new class called `Sphere`.  This class will represent a sphere with a radius and a color.  The class should have the following member functions:

* `Sphere(double radius, const std::string& color)`
* `double getRadius() const`
* `std::string getColor() const`
* `double getVolume() const`
* `double getSurfaceArea() const`
* `std::string toString() const`
* `void setRadius(double radius)`
* `void setColor(const std::string& color)`

The volume of a sphere is `4/3 * pi * r^3` and the surface area is `4 * pi * r^2`.

As of C++ version 20 (update your project properties to use C++20), you can use `std::numbers::pi` to get the value of pi.  You will need to `#include <numbers>` to use this. 'pi' is a `constexpr` variable.

For squaring and cubing, you can use `std::pow` from `<cmath>`, or simply multiply the number by itself.

#### Steps
* Create a new class called `Sphere` in a file called `Sphere.h`.
* Wrap the class in a namespace called `utility::geometry`.
* Add a private `double` member variable called `radius`.
* Add the functions listed above.
* Create a `main.cpp` file and test your class.

#### Testing

In your `main.cpp` file, create a `Sphere` object and print it out.  Then, change the radius and color and print it out again.  Finally, print out the volume and surface area.
