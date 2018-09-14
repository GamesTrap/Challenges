#include <iostream>

#include "IntAmount.h"

int main()
{
	IntAmount amount;

	amount.add(2);
	amount.add(-9);
	amount.add(2);
	amount.remove(99);
	amount.remove(-9);
	amount.display();
	amount.clear();

	for (int i = 17; i < 33; ++i)
		amount.add(i * i);

	std::cout << "Amount: " << amount.size() << " Minimum: " << amount.getMin() << '\n';
	std::cout << "amount.isMember(1337) " << amount.isMember(1337) << '\n';
	std::cout << '\n';

	std::cout << "Press Enter to continue . . . ";
	std::cin.get();
	return 0;
}