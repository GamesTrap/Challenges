#include <iostream>
#include <string>

bool CheckStringForDoubleConvert(std::string& str)
{
	for (auto& c : str)
	{
		if (!(c == '.' || c == ',' || isdigit(c)))
			return false;
	}

	return true;
}

double ConvertToDouble(std::string& str)
{
	while (!CheckStringForDoubleConvert(str))
	{
		std::cout << "Wrong Input! Try again: ";
		std::getline(std::cin, str);
	}

	std::cout << str << " passed double check!" << '\n';

	return std::stod(str);
}

int main()
{
	double f, m, a;
	char c;
	std::string temp;

	std::cout << "What would you like to calculate?" << '\n';
	std::cout << "Type F for force, M for mass, or A for acceleration: ";
	std::cin >> c;

	while(true)
	{		
		//Calculate force
		if (c == 'f' || c == 'F')
		{
			std::cout << "What is the acceleration?" << '\n';
			std::getline(std::cin, temp);
			a = ConvertToDouble(temp);

			std::cout << "What is the mass?" << '\n';
			std::getline(std::cin, temp);
			m = ConvertToDouble(temp);

			f = m * a;
			std::cout << "The force is " << f << '\n' << '\n';
			break;
		}

		//Calculate mass
		if (c == 'm' || c == 'M')
		{
			std::cout << "What is the acceleration?" << '\n';
			std::getline(std::cin, temp);
			a = ConvertToDouble(temp);

			std::cout << "What is the force?" << '\n';
			std::getline(std::cin, temp);
			f = ConvertToDouble(temp);

			m = f / a;
			std::cout << "The mass is " << m << '\n' << '\n';
			break;
		}

		//Calculate acceleration
		if (c == 'a' || c == 'A')
		{
			std::cout << "What is the force?" << '\n';
			std::getline(std::cin, temp);
			f = ConvertToDouble(temp);

			std::cout << "What is the mass?" << '\n';
			std::getline(std::cin, temp);
			m = ConvertToDouble(temp);

			a = f / m;
			std::cout << "The acceleration is " << a << '\n' << '\n';
			break;
		}

		//Wrong Input
		std::cout << "Wrong Input! Try again: ";
		std::cin >> c;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}	

	std::cout << "Press Enter to continue . . . ";
	std::cin.get();
	return 0;
}