#include <iostream>

int main()
{
	int first, second, third;
	std::cout << "Only integers" << '\n';
	std::cout << "Please enter first number: ";
	std::cin >> first;
	std::cout << "Please enter second number: ";
	std::cin >> second;
	std::cout << "Please enter third number: ";
	std::cin >> third;
	std::cout << '\n';

	if (first > second && first > third)
		std::cout << first << " is the biggest number" << '\n';
	else if (second > first && second > third)
		std::cout << second << " is the biggest number" << '\n';
	else
		std::cout << third << " is the biggest number" << '\n';
	std::cout << '\n';

	std::cout << "Press Enter to continue . . . ";
	std::cin.ignore();
	std::cin.get();
	return 0;
}