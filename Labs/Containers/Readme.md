## Overview
Create a dynamic list of temperatures!

| | |
| --------- | --------------------------- |
| Exercise Folder | Containers |
| Builds On | [SmartPtrs](../SmartPtrs) |
| Time to complete | 30 minutes


Continue with the smart pointers lab, or use the starter code provided in this folder.

### Steps
1. Prompt the user for a starting temperature, an ending temperature, and a step size.  Use these values to create a vector of temperatures.  
1. Create a vector or list of Temperature unique pointers.  Use a for loop to create a Temperature object for each temperature in the vector.  
1. Add the Temperature object to the vector or list of unique pointers.  
   1. Since unique pointers cannot be copied, you will need to use `std::move` to add the Temperature object to the vector or list of unique pointers, or create the temperature object "on the fly" in the `push_back` call.  This will make the unique pointer transient and allow it to be added to the vector or list of unique pointers.
1. Loop through and print the temperature values from the vector or list of unique pointers.
