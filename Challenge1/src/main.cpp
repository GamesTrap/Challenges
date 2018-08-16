#include <iostream>

int main()
{
	const unsigned int i = 0;
	const unsigned long l = 0;
	const unsigned long ll = 0;

	std::cout << "Maximum values:" << '\n';
	std::cout << "signed int = " << (~i >> 1) << '\n';
	std::cout << "signed long = " << (~l >> 1) << '\n';
	std::cout << "signed long long = " << (~ll >> 1) << '\n';
	std::cout << '\n';
	std::cout << "unsigned int = " << ~i << '\n';
	std::cout << "unsigned long = " << ~l << '\n';
	std::cout << "unsigned long long = " << ~ll << '\n';

	std::cout << "Press any key to continue . . . ";
	std::cin.ignore(1000, '\n');
	std::cin.get();
	return 0;
}