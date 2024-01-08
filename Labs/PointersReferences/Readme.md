## Overview

This exercise provides a simple, yet clear demonstration of value, pointer and reference semantics & syntax.

| | |
| --------- | --------------------------- |
| Exercise Folder | PointersReferences |
| Builds On | none |
| Time to complete | 30 minutes

For this stand-alone exercise, create a new console application (or folder). 

1. Before ```main()```  define these functions:
```cpp
void DisplayInt(int value)
{
}

void DisplayIntRef(int& value)
{
}

void DisplayIntPointer(int* value)
{
}
```
2.  Add this code to ```main```:
```c++
int main()
{
    int value = 5;
    cout << "Value: " << value 
    << " at address: " << &value << endl;

    DisplayInt(value);
    DisplayIntRef(value);
    DisplayIntPointer(&value);

    cout << "End Value: " << value << endl;
    return 0;
}
```

3. In each of the *Display* functions, write *value* and *value*'s address to the console
4. Increment value
5. Explain the results

