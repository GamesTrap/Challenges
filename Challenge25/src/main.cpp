#include <iostream>

#include <fstream>

int main(const int argc, char* argv[])
{
	std::cout << "Output files" << '\n';
	if(argc == 1)
	{
		std::cout << "No files in command line found." << '\n'
		          << "Usage: " << argv[0] << " file1 file2 and so on." << '\n' << '\n';

		std::cout << "Press Enter to continue . . . ";
		std::cin.get();
		return 0;
	}

	int no{ 0 };
	while(argv[++no] != nullptr)
	{
		std::ifstream source(argv[no], std::ios::binary);
		std::cout << "File " << argv[no];

		if(!source) //Error checking
		{
			std::cout << " not found." << '\n';
			continue;
		}
		std::cout << ':' << '\n';

		char ch;

		while (source.get(ch))
			std::cout << ch; //Output character by character

		source.close();
	}
	std::cout << '\n';

	std::cout << "Press Enter to continue . . . ";
	std::cin.get();
	return 0;
}