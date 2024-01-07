#include <iostream>
#include <cctype>

int main()
{
	char c = 'a';

	switch (toupper(c))
	{
		case 'A':
			std::cout << "A\n";
		case 'B':
			std::cout << "B\n";
			break;
		case 'C':
			std::cout << "C\n";
			break;
		default:
			std::cout << "Default\n";
	}

}
