#include <iostream>

#include <cstring>

//Comparison function for C-string array elements
int scmp(const void* a, const void* b)
{
	//Conversion to a const pointer to a C string, ie. on (const char *)
	const char* pa = *static_cast<const char* const*>(a);
	const char* pb = *static_cast<const char* const*>(b);

	return std::strcmp(pa, pb);
}

int main()
{
	const char* sField[] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten" };
	const unsigned int numberOfElements = sizeof(sField) / sizeof(sField[0]);
	//Calling qsort():
	//qsort(sField, numberOfElements, sizeof(sField[0]), scmp); or:
	std::qsort(sField, numberOfElements, sizeof(char*), scmp);

	//ALPHABETICAL output of the sorted field:
	for(auto& i : sField)
		std::cout << ' ' << i;
	std::cout << '\n' << '\n';

	std::cout << "Press Enter to continue . . . ";
	std::cin.get();
	return 0;
}