#include <iostream>

#include <fstream>

bool isLetter(char c)
{
	return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == '_';
}

bool isAlphanumerical(char c)
{
	return (c >= '0' && c <= '9') || isLetter(c);
}

int main(int argc, char* argv[])
{
	if(argc == 1)
	{
		std::cout << "No filename in command line found." << '\n'
			      << "Usage: " << argv[0] << " filename" << '\n';

		std::cout << "Press Enter to continue . . . ";
		std::cin.get();
		return 0;
	}

	std::ifstream source(argv[1]);
	if (!source) //Error checking
	{
		std::cout << "File " << argv[1] << " not found." << '\n';

		std::cout << "Press Enter to continue . . . ";
		std::cin.get();
		return 0;
	}

	char ch;
	bool nameFound{ false };

	while(source.get(ch))
	{
		if (isLetter(ch))
		{
			std::cout << ch;
			nameFound = true;
		}
		else if (nameFound && isAlphanumerical(ch))
			std::cout << ch;
		else if(nameFound)
		{
			nameFound = false;
			std::cout << '\n';
		}
	}
	std::cout << '\n';

	std::cout << "Press Enter to continue . . . ";
	std::cin.get();
	return 0;
} //source.close()