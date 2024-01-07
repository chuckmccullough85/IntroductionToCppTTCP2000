## Overview

Let's sort an array of strings!

| | |
| --------- | --------------------------- |
| Exercise Folder | BubbleSort |
| Builds On | None |
| Time to complete | 60 minutes

Apply what you learned about sorting to sort an array of strings.

### Setup
* Create a new console project or open the starter project in *Labs/BubbleSort*.
* If you created a new project, copy and paste the code below into your main file.
* The array *names* is initialized with some random names.  We used an array initializer to do this.  The compiler will figure out the size of the array.
* Each element of the array is of type *std::string*.
* Use a range-based for loop to print out the original contents of the array.

```cpp
// BubbleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

int main()
{
	// array initialization.  C++ will figure out the size of the array.
	std::string names[] = {
		"Hill, Hank",
		"Hill, Peggy",
		"Platter, Luanne",
		"Platter, Lucky",
		"Strickland, Buck",
		"Souphanousinphone, Minh",
		"Boomhauer, Jeff",
		"Gribble, Dale",
		"Gribble, Nancy",
		"Souphanousinphone, Kahn",
		"Dauterive, Bill",
		"Dauterive, Lenore",
		"Redcorn, John",
		"Souphanousinphone, Connie"
	};
	for (auto name : names)			// range-based for loop
		std::cout << name << std::endl;

	// sort the array using a bubble sort
}
```

### Steps

Since C++ determined the size of the array for us, we can use **sizeof** or **std::size** to capture the number of elements in the array.
* declare a variable to hold the number of elements in the array - 1.  This will be the number of times we need to iterate through the array (at most).  Name the variable *maxIndex*
* use **sizeof** or **std::size** to capture the number of elements in the array.
* declare a boolean variable to indicate if a swap was made during the last iteration.  Initialize it to true.
* use a while for the outer loop.  Loop until *swapped* is false.
* Inside the while loop, 
	* set *swapped* to false.
	* declare a temporary variable newMaxIndex and set it to maxIndex.  We don't want to change maxIndex until we've gone through the entire for loop or we will cause it to end early!
* Now, use a for loop to iterate through the array.  The loop should start at 0 and end at < *maxIndex*.
	* if the array has length 20, the last index is 19.  That's what maxIndex starts with.  The loop should stop at 18 because we will compare the current index with the next index (19).
* In the for loop, compare the current element with the next element.  If the current element is greater than the next element
	* swap them (use a temporary variable)
	* set *swapped* to true.
	* set *maxIndex* to the current index.  This will reduce the number of times we need to iterate through the array.  At worst, *maxIndex* will be 1 smaller each time through the loop, but it could be more.

---

* Lastly, loop through the array and print out the sorted contents.

---
### Challenge
Declare a variable to hold the number of comparisons made during the sort.  Increment the variable each time you compare two elements.

Display the value of the variable after the sort is complete.  How many comparisons were made? How can that change with the input data and with the algorithm?

  * for instance, just decrementing maxIndex after each outer loop will result in more comparisons.  We counted 85 with a simple decrement vs 73 with tracking the last swapped index.
  * also, looping the outer loop until maxIndex is 0 will result in more comparisons.  We counted 91 with this approach.
	

You will notice that increasing the number of elements in the array just a little increases the number of comparisons a lot!


