#include <iostream>

int main()
{
	const unsigned int i = 0;
	const unsigned long l = 0;
	const unsigned long long ll = 0;

	std::cout << "Maximum values:" << '\n';
	std::cout << '\n';
	std::cout << "Assumption: char = 8 bits; short = 16 bits" << '\n';
	std::cout << "signed char    = " << 0b01111111 << '\n';
	std::cout << "signed short   = " << 0b0111'1111'1111'1111 << '\n';
	std::cout << "unsigned char  = " << 0b11111111 << '\n';
	std::cout << "unsigned short = " << 0b1111'1111'1111'1111 << '\n';
	std::cout << '\n';
	std::cout << "signed int       = " << static_cast<int>(~i >> 1) << '\n';
	std::cout << "signed long      = " << static_cast<long>(~l >> 1) << '\n';
	std::cout << "signed long long = " << static_cast<long long>(~ll >> 1) << '\n';
	std::cout << '\n';
	std::cout << "unsigned int       = " << ~i << '\n';
	std::cout << "unsigned long      = " << ~l << '\n';
	std::cout << "unsigned long long = " << ~ll << '\n';

	std::cout << "Press any key to continue . . . ";
	std::cin.get();
	return 0;
}