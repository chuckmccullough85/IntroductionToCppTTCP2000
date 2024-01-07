## Overview

Define a namespace for our code & use a using!

| | |
| --------- | --------------------------- |
| Exercise Folder | Namespaces |
| Builds On | Function2 |
| Time to complete | 15 minutes

### Namespace std 

All of the standard library functions and objects are defined in ```namespace std```.  This is why we have ```std::``` in front of **cout** and **endl**.

1. Before main, add ```using namespace std;```.
2. Remove all **std::** in main()

### Custom Namespace
What would be a good category name for temperatures?

1. in *Temperature.h*, wrap all the declarations and definitions with ```namespace utility::temperature```
2. You may have to modify the compiler version to C++ 20.
3. Add a **using** in main for the new namespace

---

