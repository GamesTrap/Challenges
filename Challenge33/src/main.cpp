#include <iostream>
#include <string>

bool CheckStringForDoubleConvert(std::string& str)
{
	if (str.empty())
		return false;

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

	return std::stod(str);
}

int main()
{
	double f, m, a;
	std::string temp;

	std::cout << "What would you like to calculate?" << '\n';
	std::cout << "Type F for force, M for mass, or A for acceleration: ";

	while(true)
	{	
		//Get Input
		std::getline(std::cin, temp); 

		//Calculate force
		if (temp == "f" || temp == "F")
		{
			std::cout << "What is the acceleration? ";
			std::getline(std::cin, temp);
			a = ConvertToDouble(temp);

			std::cout << "What is the mass? ";
			std::getline(std::cin, temp);
			m = ConvertToDouble(temp);

			f = m * a;
			std::cout << "The force is " << f << '\n' << '\n';
			break;
		}

		//Calculate mass
		if (temp == "m" || temp == "M")
		{
			std::cout << "What is the acceleration? ";
			std::getline(std::cin, temp);
			a = ConvertToDouble(temp);

			std::cout << "What is the force? ";
			std::getline(std::cin, temp);
			f = ConvertToDouble(temp);

			m = f / a;
			std::cout << "The mass is " << m << '\n' << '\n';
			break;
		}

		//Calculate acceleration
		if (temp == "a" || temp == "A")
		{
			std::cout << "What is the force? ";
			std::getline(std::cin, temp);
			f = ConvertToDouble(temp);

			std::cout << "What is the mass? ";
			std::getline(std::cin, temp);
			m = ConvertToDouble(temp);

			a = f / m;
			std::cout << "The acceleration is " << a << '\n' << '\n';
			break;
		}

		//Wrong Input
		std::cout << "Wrong Input! Try again: ";
	}	

	std::cout << "Press Enter to continue . . . ";
	std::cin.get();
	return 0;
}