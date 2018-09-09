#include <iostream>

#include <vector>

constexpr int MINIMUM{ -99 };
constexpr int MAXIMUM{ 100 };
constexpr int INTERVALNUMBER{ 10 };
constexpr int INTERVALWIDTH{ (MAXIMUM - MINIMUM + 1) / INTERVALNUMBER };

int main()
{
	int input;
	std::vector<int> intervals(INTERVALNUMBER);

	std::cout << "Only integers" << '\n';
	std::cout << "Please enter a number in range of " << MINIMUM << "..." << MAXIMUM << ": ";
	std::cin >> input;

	while(input >= MINIMUM && input <= MAXIMUM)
	{
		intervals.at((input - MINIMUM) / INTERVALWIDTH)++;
		std::cin >> input;
	}
	std::cout << '\n';

	for (int i = 0; i < INTERVALNUMBER; ++i)
		std::cout << "Interval " << i * INTERVALWIDTH + MINIMUM << " .. " << (i + 1) * INTERVALWIDTH + MINIMUM - 1 << ": " << intervals.at(i) << '\n';
	std::cout << '\n';

	std::cout << "Press Enter to continue . . . ";
	std::cin.ignore();

	std::cin.get();
	return 0;
}