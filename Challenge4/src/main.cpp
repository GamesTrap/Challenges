#include <iostream>

#include <string>

int main()
{
	int num;
	std::string binary;

	std::cout << "Only integers" << '\n';
	std::cout << "Please enter a number: ";
	std::cin >> num;
	std::cout << '\n';

	const int numBytes = sizeof(num);
	const int numBits = 8 * numBytes;

	std::cout << "Binary: ";
	for(int i = numBits - 1; i >= 0; --i)
	{
		if (num & (1 << i))
			std::cout << '1';
		else
			std::cout << '0';
	}
	std::cout << '\n' << '\n';

	std::cout << "Press Enter to continue . . . ";
	std::cin.ignore();
	std::cin.get();
	return 0;
}