#include <iostream>

#include <string>

int main()
{
	std::string input;
	std::cout << "Enter a natural number: ";
	std::cin >> input;
	std::cout << '\n';

	//a)
	long x = std::stol(input);
	std::cout << "Converted number: " << x << '\n';

	//b)
	int checksum = 0;
	while(x > 0)
	{
		checksum += x % 10;
		x /= 10;
	}
	std::cout << "Checksum: " << checksum << '\n' << '\n';

	std::cout << "Press Enter to continue . . . ";
	std::cin.ignore();
	std::cin.get();
	return 0;
}