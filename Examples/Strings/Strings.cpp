#include <iostream>
#include <string>

int main()
{
	std::string txt;	// empty string
	std::string txt2 = "Hello";	// string with initial value
	std::string txt3 = txt2;	// copy of txt2

	std::cout << txt2[0] << std::endl;	// prints 'H'

	std::cout << txt2.length() << std::endl;	// prints 5
	std::cout << txt2.size() << std::endl;	// prints 5
	std::cout << txt2.capacity() << std::endl;	// prints size of allocated memory
	std::cout << txt2.max_size() << std::endl;	// prints maximum size of string
	std::cout << txt2.empty() << std::endl;	// prints 0 (false)
	txt2.reserve(100);	// reserves 100 bytes of memory
	std::cout << txt2.capacity() << std::endl;	// prints size of allocated memory (100)

	txt = txt2;			// copy txt2 to txt
	txt.assign(txt2);	// same as above
	txt.append(txt3);	// appends txt3 to txt
	txt += txt3;		// same as above
	txt = txt2 + txt3;	// assign concatenation of txt2 and txt3 to txt

	std::string example = "Now is the time for all good men to come to the aid of their country.";	
	std::cout << example.substr(0, 3) << std::endl;	// prints "Now"
	std::cout << example.find("the") << std::endl;	// prints 7
	example.replace(0, 3, "Later");	// replaces "Now" with "Later"

	if (txt > txt2)		// compares txt and txt2
		std::cout << "txt is greater than txt2" << std::endl;
	else
		std::cout << "txt is less than or equal to txt2" << std::endl;
	int v = txt.compare(txt2);	// 1 if txt > txt2, 0 if txt == txt2, -1 if txt < txt2


}
