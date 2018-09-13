#include <iostream>

#include "Person.h"

int main()
{
	Person person("Annabella Meier", 22, Sex::Female);

	std::cout << person.getName() << " is " << person.getAge() << " years old." << '\n';
	std::cout << person.getName() << " is a " << person.getSex() << '\n';
	person.setAge(person.getAge() + 1);
	std::cout << person.getName() << " had her birthday. She is now " << person.getAge() << " years old." << '\n';
	person.setName("Annabella Schulz");
	std::cout << "She also got married. Her name is now " << person.getName() << '\n';
	std::cout << '\n';

	std::cout << "Press Enter to continue . . . ";
	std::cin.get();
	return 0;
}