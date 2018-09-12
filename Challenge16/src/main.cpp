#include <iostream>

#include <string>

void reverseString(std::string& string)
{
	std::size_t left{ 0 };
	std::size_t right{ string.length() - 1 };

	while (left < right)
	{
		const char temp{ string.at(left) };
		string.at(left++) = string.at(right);
		string.at(right--) = temp;
	}
}

int main()
{
	std::string input;

	std::cout << "Please enter a string: ";
	std::getline(std::cin, input);
	std::cout << '\n';

	reverseString(input);

	std::cout << "Reversed: " << input << '\n';
	std::cout << '\n';

	std::cout << "Press Enter to continue . . . ";
	std::cin.get();
	return 0;
}