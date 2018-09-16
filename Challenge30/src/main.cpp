#include <iostream>

#include <vector>
#include "Student.h"
#include "Professor.h"

int main()
{
	std::vector<Person*> people;
	people.push_back(new Student("Pride", "Kappa", "635374"));
	people.push_back(new Professor("Respect", "Dr. Dis", "Killing"));
	people.push_back(new Student("Ross", "Bob", "123429"));

	std::cout << "Firstnames:" << '\n';
	for (auto personPtr : people)
		std::cout << personPtr->getFirstname() << '\n';
	std::cout << '\n';

	std::cout << "toString() results:" << '\n';
	for (auto personPtr : people)
		std::cout << personPtr->toString() << '\n';
	std::cout << '\n';

	//Release
	for (auto personPtr : people)
		delete personPtr;

	std::cout << "Press Enter to continue . . . ";
	std::cin.get();
	return 0;
}