#include <iostream>

#include <string>

bool isAlphanumerical(const std::string& string)
{
	bool result{ true };

	for(char character : string)
	{
		const bool isDigit = character >= '0' && character <= '9';
		const bool isLetter = (character >= 'A' && character <= 'Z') ||
		    	              (character >= 'a' && character <= 'z');

		if(!isDigit && !isLetter)
		{
			result = false;
			break;
		}
	}
	return result;
}

int main()
{
	std::string input;

	std::cout << "Please enter a string: ";
	std::getline(std::cin, input);
	std::cout << '\n';

	if (isAlphanumerical(input))
		std::cout << input << " is alphanumerical!" << '\n';
	else
		std::cout << input << " is not alphanumerical!" << '\n';
	std::cout << '\n';

	std::cout << "Press Enter to continue . . . ";
	std::cin.get();
	return 0;
}