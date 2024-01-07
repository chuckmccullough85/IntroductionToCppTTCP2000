// Strings Solution
#include <iostream>
#include <string>

int main()
{
	std::string first = "Hank";
	std::string last = "Hill";
	std::string hank = first + " " + last;
	std::cout << hank << std::endl;

	std::string bobby = "Bobby Hill";
	if (hank > bobby)
		std::cout << hank << " is greater than " << bobby << std::endl;
	else
		std::cout << hank << " is less than " << bobby << std::endl;

	std::string alias = "Hank";
	if (hank == alias)
		std::cout << hank << " is equal to " << alias << std::endl;
	else
		std::cout << hank << " is not equal to " << alias << std::endl;


	// Find the first space in the string and insert "Rutherford " after it
	hank.insert(hank.find(" ") + 1, "Rutherford ");
	std::cout << hank << std::endl;
}

