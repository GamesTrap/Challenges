#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

#include <cstring>

char* strDuplicate(const char* string)
{
	//WARNING: The caller is responsible for delete[]!
	char* duplicate = new char[strlen(string) + 1];
	std::strcpy(duplicate, string);

	return duplicate;
}

int main()
{
	const char* const original = "Hello World!";
	std::cout << original << '\n';
	char* copy = strDuplicate(original);
	std::cout << copy << '\n';
	delete[] copy; //Do not forget

	std::cout << "Press Enter to continue . . . ";
	std::cin.get();
	return 0;
}