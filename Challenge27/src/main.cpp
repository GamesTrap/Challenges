#include <iostream>

#include "Format.h"

int main()
{
	Format f(12, 3);
	std::cout << " 789.906625       :" << f.toString(789.906625) << '\n';
	std::cout << "-123456789.906625 :" << f.toString(-123456789.906625) << '\n';
	std::cout << "-0,00123456789    :" << f.toString(-0.00123456789) << '\n';
	std::cout << " 0,00             :" << f.toString(0.00) << '\n';
	std::cout << "-12345.6789906625 :" << f.toString(-12345.6789906625) << '\n';
	std::cout << " 1.00000          :" << f.toString(1.0) << '\n';
	std::cout << '\n';

	Format fi(12, 0);
	std::cout << " 123              :" << fi.toString(123) << '\n';
	std::cout << "-123456789.906625 :" << fi.toString(-123456789.906625) << '\n';
	std::cout << '\n';

	std::cout << "Press Enter to continue . . . ";
	std::cin.get();
	return 0;
}