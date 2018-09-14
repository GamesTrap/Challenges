#include <iostream>

#include <cassert>
#include <cstring>

void strCopy(char* target, const char* source)
{
	while ((*target++ = *source++))
		;
}

int main()
{
	const char* const original = "Hello World!";
	std::cout << original << '\n';
	char copy[80];
	assert(sizeof(copy) > strlen(original));
	strCopy(copy, original);
	std::cout << copy << '\n' << '\n';

	std::cout << "Press Enter to continue . . . ";
	std::cin.get();
	return 0;
}