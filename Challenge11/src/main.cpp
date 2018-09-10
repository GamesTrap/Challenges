#include <iostream>

#include <fstream>
#include <string>

constexpr unsigned int LINELENGTH = 16;

int main()
{
	std::string filename;
	std::string hexCodes;
	std::string letters;
	unsigned int count = 0;
	char c;

	std::cout << "Please enter filename(with extension): ";
	std::getline(std::cin, filename);
	std::cout << '\n';

	std::ifstream file(filename, std::ios::binary);

	if (!file)
		std::cerr << filename << " could not be opened!" << std::endl;
	else
	{
		while(file.get(c))
		{
			const auto uc = static_cast<unsigned char>(c);
			const auto num = static_cast<unsigned int>(uc);
			const std::string encoding{ "0123456789ABCDEF" };
			hexCodes += encoding.at(num / 16);
			hexCodes += encoding.at(num % 16);
			hexCodes += ' ';
			if (c < ' ') //Unprintable character
				c = '.';
			letters += c;
			++count;
			count %= LINELENGTH;
			if (count == 0)
			{
				std::cout << letters << "  " << hexCodes << '\n';
				letters = "";
				hexCodes = "";
			}
		}
		if (count != 0) //Output remaining
		{
			std::cout << letters;
			for (unsigned int i = 0; i < (LINELENGTH - count); ++i)
				std::cout << ' ';
			std::cout << "  " << hexCodes << '\n';
		}
		std::cout << '\n';
	}	

	std::cout << "Press Enter to continue . . . ";
	std::cin.get();
	return 0;
}