#include <iostream>

//Same as std::pow()
double power(const double base, int exponent)
{
	double result = 1;
	bool negative = false;

	if(exponent < 0)
	{
		exponent = -exponent;
		negative = true;
	}

	for (int i = 0; i < exponent; ++i)
		result *= base;

	if (negative)
		result = 1.0 / result;

	return result;
}

int main()
{
	double base;
	int exponent;

	std::cout << "Please enter a number: ";
	std::cin >> base;
	std::cout << "Please enter exponent: ";
	std::cin >> exponent;
	std::cout << '\n';

	std::cout << "Power of " << base << "^" << exponent << " = " << power(base, exponent) << '\n';
	std::cout << '\n';

	std::cout << "Press Enter to continue . . . ";
	std::cin.ignore();
	std::cin.get();
	return 0;
}