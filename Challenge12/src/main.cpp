#include <iostream>

#include <string>
#include <fstream>

int main()
{
	std::string filename;

	std::cout << "Please enter filename(with extension): ";
	std::cin >> filename;

	std::ifstream file(filename);

	if (!file)
		std::cerr << filename << " could not be opened!" << std::endl;
	else
	{
		unsigned long numChars = 0;
		unsigned long numWords = 0;
		unsigned long numLines = 0;
		char c = '\n';
		bool isWord = false;

		while (file.get(c))
		{
			if (c == '\n')
				++numLines;
			else
				++numChars;

			//Adaptation to umlauts is missing!
			if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
				isWord = true; //Word beginning, or c is in a word
			else
			{
				if (isWord)
					++numWords; //Word end exceeded
				isWord = false;
			}
		}
		if (c != '\n') //The last line does not contain a final \n. still count
			++numLines;
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) //The last character is in a word that has not been counted yet
			++numWords;

		std::cout << '\n';
		std::cout << "Number of characters: " << numChars << '\n';
		std::cout << "Number of words: " << numWords << '\n';
		std::cout << "Number of lines: " << numLines << '\n';
		std::cout << '\n';
	}

	std::cout << "Press Enter to continue . . . ";
	std::cin.ignore();
	std::cin.get();
	return 0;
}