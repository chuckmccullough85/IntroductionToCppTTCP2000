## Overview
Building on the previous project, create a project with multiple files and demonstrate preprocessor directives.

| | |
| --------- | --------------------------- |
| Exercise Folder | FileOrganization |
| Builds On | Variables |
| Time to complete | 30 minutes


### Global Variables
In the last lab, we declared all of our variables inside of the *main* function.  This is fine for small programs, but as programs get larger, it is often useful to declare variables outside of the main function.  This allows the variables to be used in multiple functions.  These variables are called *global variables*.

- Before main, declare an `int` variable named *myGlobalVar*.  Don't assign anything to the variable.  Add a cout << statement to main to display the value of the variable.  Run the program.  What is the value of the variable?  Why?

Let's create another file named *myinclude.h*
* In Visual Studio, right click on your project and choose *Add/New Item*.  Choose .h file and name it *myinclude.h*
* In VS Code, just create a file in the current directory named *myinclude.h*
* Declare another global `int` named anotherGlobalVar in the .h file.
* Add a ```#include "myinclude.h"``` to the top of your main file
* Display its value in main

The global variables are visible in *main* regardless of whether it was declared in the same file or not.  This is because the preprocessor copies the contents of the .h file into the main file before compiling.  This is called *inclusion*.

### Preprocessor Directives
Now, let's add another .h file to the project and include `myinclude.h` in it.  Name the file *anotherInclude.h*.  We don't need any other code in that file.  We just want to see what happens when we include the file in multiple places.

```cpp
// anotherInclude.h
#include "myinclude.h"
```

* Include both *myinclude.h* and *anotherInclude.h* in your cpp file.
* Try to build the project.  What happens?  Why?

So, the variable ```int aotherGlobalVar``` is declared twice.  This is a problem.  We can fix this by using *preprocessor directives*.

### Header Guards
Since header files are often included in multiple places, we need a way to prevent the same code from being included multiple times.  We can do this with *header guards*.  Header guards are preprocessor directives that prevent the header file from being included more than once.

* Wrap both header files with this preprocessor guard:

*myinclude.h*
```cpp
#ifndef MYINCLUDE_H
#define MYINCLUDE_H
int anotherGlobalVar;
#endif
```

*anotherInclude.h*
```cpp
#ifndef ANOTHERINCLUDE_H
#define ANOTHERINCLUDE_H

#include "myinclude.h"

#endif 
```

* Try to build the project.  What happens?  Why?

The `#ifndef` directive checks to see if the header guard has been defined.  If it has not, it defines it and includes the code.  If it has, it skips the code.  This prevents the header file from being included more than once.  The secret is to make sure that the symbol used in the `#ifndef` directive is unique to the header file.  This is why we use `MYINCLUDE_H` and `ANOTHERINCLUDE_H` instead of just `INCLUDE_H`.

### Pragma Once
Another way to prevent header files from being included more than once is to use the `#pragma once` directive.  This directive is not part of the C++ standard, but it is supported by most compilers.  It is also easier to use than header guards and we don't have to worry about making sure the symbol is unique.

* Replace the header guards in *myinclude.h* and *anotherInclude.h* with `#pragma once`
* Try to build the project.  What happens?  Why?


### Multiple CPP Files
Now that we have multiple header files, let's create another cpp file.  The compiler **processes each compile unit (cpp + headers) in isolation**.  The linker resolves symbols referenced across compile units.

* Create a new cpp file named *anotherFile.cpp*
* #include "anotherInclude.h".
* Now build the project.  What happens?  Why?

The error is a linker error.  Before, we saw compiler errors.  The compiler processes each cpp file in isolation.  The linker resolves symbols across cpp files.  

The global variable `int anotherGlobalVar` is declared in both .cpp files.  The files compile fine, but the linker doesn't know which one to use. 

We will address this issue later. For now, comment out the include in one of the files and build the project.

