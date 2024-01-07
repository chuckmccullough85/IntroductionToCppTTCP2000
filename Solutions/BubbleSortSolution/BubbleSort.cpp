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
		//,							// challenge
		//"Flintstone, Fred",
		//"Flintstone, Wilma",
		//"Rubble, Barney",
		//"Rubble, Betty",
		//"Flintstone, Pebbles",
		//"Rubble, Bamm-Bamm",
		//"Flintstone, Dino",
		//"Flintstone, Hoppy",
		//"Flintstone, Pearl",
		//"Flintstone, Roxy",
		//"Slate, George",
		//"Slate, Jane",
	};
	for (auto name : names)			// range-based for loop
		std::cout << name << std::endl;

	// sort the array using a bubble sort
	int comparisons = 0;			// challenge
	bool swapped = true;
	//int n = sizeof(names) / sizeof(names[0]);
	int maxIndex = std::size(names) - 1;
	while (maxIndex > 0) //  swapped)  // challenge
	{
		swapped = false;
		int newMaxIndex = maxIndex;
		for (int j = 0; j < maxIndex; j++)
		{
			comparisons++;
			if (names[j] > names[j + 1])
			{
				auto temp = names[j];
				names[j] = names[j + 1];
				names[j + 1] = temp;
				newMaxIndex = j;
				swapped = true;
			}
		}
		maxIndex--; // = newMaxIndex;   // challenge
	}

	// display the sorted array
	std::cout << "\n\nThe sorted array is: " << std::endl;
	for (auto name : names)
		std::cout << name << std::endl;

	std::cout << "\n\nNumber of comparisons: " << comparisons << std::endl;
}

