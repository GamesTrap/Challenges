#include <iostream>

int main()
{
	int start, end, num;
	std::cout << "Only integers!" << '\n';
	std::cout << "Please enter start of range: ";
	std::cin >> start;
	std::cout << "Please enter end of range: ";
	std::cin >> end;

	if (start > end)
		std::cerr << '\n' << "Error! The start of the range can't be bigger than the end of range!" << std::endl;
	else
	{
		std::cout << "Please enter an integer: ";
		std::cin >> num;
		std::cout << '\n';

		if (num >= start && num <= end)
			std::cout << "The number " << num << " is in range of " << start << "..." << end << '\n';
		else
			std::cout << "The number " << num << " is not in range of " << start << "..." << end << '\n';
	}
	std::cout << '\n';

	std::cout << "Press Enter to continue . . . ";
	std::cin.ignore();
	std::cin.get();
	return 0;
}