#include <iostream>

#include "Member.h"

int main()
{
	Member otto("Otto");
	Member andrea("Andrea");
	Member jens("Jens");
	Member silvana("Silvana");
	Member miriam("Miriam");
	Member paul("Paul");

	std::vector<Member*> all{ &otto, &andrea, &jens, &silvana, &miriam, &paul };

	andrea.getsToKnow(jens);
	silvana.getsToKnow(otto);
	paul.getsToKnow(otto);
	paul.getsToKnow(silvana);
	miriam.getsToKnow(andrea);
	jens.getsToKnow(miriam);
	jens.getsToKnow(silvana);

	if (jens.knows(andrea))
		std::cout << "Jens knows Andrea" << '\n';

	//Output of all members with indication of who knows whom:
	for(auto memberPtr : all)
	{
		std::cout << memberPtr->giveName() << " knows: ";
		memberPtr->printKnown();
	}
	std::cout << '\n';

	Member dirac("Dirac");
	{
		dirac.getsToKnow(silvana);
		Member pauli("Pauli");
		pauli.getsToKnow(dirac);
		std::cout << "Dirac knows: ";
		dirac.printKnown();
	}
	std::cout << "Dirac knows: ";
	dirac.printKnown(); //Pauli disappeared
	std::cout << '\n';

	std::cout << "Press Enter to continue . . . ";
	std::cin.get();
	return 0;
}