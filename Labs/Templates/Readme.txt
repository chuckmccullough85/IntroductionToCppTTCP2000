## Overview
Lift *Temperature* to a template.  Demonstrate a template function.

| | |
| --------- | --------------------------- |
| Exercise Folder | Template |
| Builds On | [Const](../Const) |
| Time to complete | 45 minutes

## Exercise Details
This lab is a continuation of the *const* lab.  However, you have been provided with a starter project in this folder.

The *Temperature* class is a little different from the last lab in that all of the functions are *inline*.

### Template function
Let's start with a simple template function.  Before main, define a function that takes two parameters of type T and returns the larger of the two.  The function should be named *max*.  Feel free to use the traditional `template <typename T>` syntax or the newer `auto` syntax.

In main, call the function with int, double, and string parameters.  Print the result.
    * For the strings, use "hello"**s** an "s" suffix after the literal to create a *std::string*.  Otherwise, the compiler will pass in `char*` and max will return the wrong result. (it will perform a pointer comparison).
    * How might we solve this problem? (hint: a non-template max function that takes two `const char*` parameters)

### Template class
Modify the *Temperature* class to be a template class.  The template parameter should be the type of the temperature value.  

Lift all occurances of `float` in the class to the template parameter.  You will also need to remove any `f` suffixes from literals.  Some compilers might complain about type mismatches since the literals are now `double`.  If so, you can cast the literals to the template type.

In main, create a *Temperature* object with a double and int value.  Print the values.

This might not seem like a big deal, but it is.  The *Temperature* class is now a generic class that can be used with any numeric type.  This is a very powerful feature of C++ templates.  Double is much more precise, but larger and slower than float.  Int is even faster, but has no fractional part.  You can now use the same class with any of these types.  If an application requires precision, use double.  If it requires speed, use float.  If it requires memory efficiency, use int.  The choice is yours!



