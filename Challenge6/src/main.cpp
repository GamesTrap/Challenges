#include <iostream>

#include <string>

struct Person
{
	std::string Firstname;
	std::string Lastname;
	int Age{};
};

int main()
{
	Person person;

	std::cout << "Please enter firstname: ";
	std::cin >> person.Firstname;
	std::cout << "Please enter lastname: ";
	std::cin >> person.Lastname;
	std::cout << "Please enter age: ";
	std::cin >> person.Age;
	std::cout << '\n';

	std::cout << "Firstname: " << person.Firstname << " Lastname: " << person.Lastname << " Age: " << person.Age << '\n' << '\n';

	std::cout << "Press Enter to continue . . . ";
	std::cin.ignore();
	std::cin.get();
	return 0;
}