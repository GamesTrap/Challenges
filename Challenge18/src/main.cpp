#include <iostream>

#include "GetType.h"

int main()
{
	const int i = 0;                           //Output:
	std::cout << getType(i) << '\n'; //int

	const unsigned int ui = 0;
	std::cout << getType(ui) << '\n'; //unsigned int

	const char c = 0;
	std::cout << getType(c) << '\n'; //char

	const bool b = false;
	std::cout << getType(b) << '\n'; //bool

	const float f = 0;                         //Assumption: float is not considered in getType();
	std::cout << getType(f) << '\n'; //unknown type!

	std::cout << "Press Enter to continue . . . ";
	std::cin.get();
	return 0;
}