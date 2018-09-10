#include <iostream>

#include <string>

int main()
{
	int num;
	unsigned int iterations = 0;
	long long maxNumber = 0;

	std::cout << "Only natural number > 0" << '\n';
	std::cout << "Please enter number: ";
	std::cin >> num;
	std::cin.ignore(1000, '\n'); //Delete Keyboard buffer
	std::cout << '\n';

	while(num > 1) //2.
	{
		++iterations; //Count iterations
		//1.
		if (num % 2 == 0) //Number is prime
			num /= 2;
		else //Number is not prime
			num = 3 * num + 1;
		std::cout << num << '\n';
		if(maxNumber < num) //Check for new maxNumber
		{
			maxNumber = num;
			std::cout << "New maximum. Continue with ENTER";
			std::string tmp;
			std::getline(std::cin, tmp);
		}
	}
	std::cout << '\n';

	std::cout << iterations << " Iterations. Maximum Number = " << maxNumber << '\n' << '\n';

	std::cout << "Press Enter to continue . . . ";
	std::cin.get();
	return 0;
}
