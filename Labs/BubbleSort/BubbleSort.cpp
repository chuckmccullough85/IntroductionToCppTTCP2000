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

