#include <iostream>

int main()
{
	int num1, num2;
	int sum = 0;

	std::cout << "Only integers" << '\n';
	std::cout << "Please enter first number: ";
	std::cin >> num1;
	std::cout << "Please enter second number: ";
	std::cin >> num2;
	std::cout << '\n';

	if (num2 >= num1)
	{
		//a) for loop
		for(int i = num1; i <= num2; ++i)
		{
			sum += i;
		}
		std::cout << "a) for loop Result: " << sum << '\n';

		sum = 0;
		int tmp = num1;
		//b) while loop
		while(tmp <= num2)
		{
			sum += tmp;
			++tmp;
		}
		std::cout << "b) while loop Result: " << sum << '\n';

		sum = 0;
		tmp = num1;
		//c) do while loop
		do
		{
			sum += tmp;
			++tmp;
		} while (tmp <= num2);
		std::cout << "c) do while loop Result: " << sum << '\n';

		//d) without loop
		sum = num2 * (num2 + 1) / 2 - (num1 - 1) * num1 / 2;
		std::cout << "d) without loop Result: " << sum << '\n';

		std::cout << '\n';
	}
	else
		std::cerr << "Error! First number: " << num1 << " can't be bigger than the second number: " << num2 << "!" << '\n' << std::endl;
	
	std::cout << "Press Enter to continue . . . ";
	std::cin.ignore();
	std::cin.get();
	return 0;
}