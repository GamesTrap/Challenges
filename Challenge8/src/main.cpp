#include <iostream>

#include <string>

const std::string CHARACTERS = "IVXLCDM";
unsigned int TEN{ 1000 }, N{ 6 }; //Start with M=1000 (Pos. 6)

int main()
{
	std::string result;
	unsigned int num;

	std::cout << "Only natural decimal numbers" << '\n';
	std::cout << "Please enter number: ";
	std::cin >> num;
	std::cout << '\n';

	while(num != 0) //Seperate digits successively
	{
		const auto digit = num / TEN;

		if ((digit > 3 && TEN == 1000) || digit <= 3) //Thousand or 0,1,2,3
			for (unsigned int i = 1; i <= digit; ++i)
				result += CHARACTERS.at(N);
		else if(digit <= 4) //4
		{
			result += CHARACTERS.at(N);
			result += CHARACTERS.at(N + 1);
		}
		else if(digit <= 8) //5,6,7,8
		{
			result += CHARACTERS.at(N + 1);
			for (unsigned int i = 1; i <= digit - 5; ++i)
				result += CHARACTERS.at(N);
		}
		else
		{
			result += CHARACTERS.at(N); //9
			result += CHARACTERS.at(N + 2);
		}
		N -= 2;
		num %= TEN;
		TEN /= 10;
	}

	std::cout << "Result: " << result << '\n';

	std::cout << "Press Enter to continue . . . ";
	std::cin.ignore();
	std::cin.get();
	return 0;
}