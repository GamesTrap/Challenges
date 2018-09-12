#include <iostream>

int convertToSeconds(const int hours, const int minutes, const int seconds)
{
	return (hours * (60 * 60)) + (minutes * 60) + (seconds);
}

int main()
{
	int hours, minutes, seconds;

	std::cout << "Only integers" << '\n';
	std::cout << "Please enter hours: ";
	std::cin >> hours;
	std::cout << "Please enter minutes: ";
	std::cin >> minutes;
	std::cout << "Please enter seconds: ";
	std::cin >> seconds;
	std::cout << '\n';

	std::cout << convertToSeconds(hours, minutes, seconds) << '\n';
	std::cout << '\n';

	std::cout << "Press Enter to continue . . . ";
	std::cin.ignore();
	std::cin.get();
	return 0;
}