#include <iostream>

#include <cstring>

void removeSpaces(char* s)
{
	char* q{ s };
	do
		if (*s != ' ')
			*q++ = *s;
	while (*s++);
}

int main()
{
	char str[] = "Remove  spaces    from a   string";
	std::cout << str << '\n' << "Length: " << std::strlen(str) << '\n';
	removeSpaces(str);
	std::cout << str << '\n' << "Length: " << std::strlen(str) << '\n';

	std::cout << "Press Enter to continue . . . ";
	std::cin.get();
	return 0;
}