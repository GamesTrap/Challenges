#include <iostream>

#include "MyStack.h"

int main()
{
	MyStack<int> intStack; //MyStack for int numbers

	//Fill stack with 10 numbers
	int i = 100;
	while (intStack.size() < 10)
		intStack.push(i++);
	std::cout << "Amount: " << intStack.size() << '\n';

	//Display top element
	std::cout << "Top element: " << intStack.top() << '\n';

	std::cout << "Extract and display all elements: " << '\n';
	while(!intStack.empty())
	{
		i = intStack.top();
		intStack.pop();
		std::cout << i << '\t';
	}
	std::cout << '\n';

	//MyStack for double numbers
	MyStack<double> doubleStack;

	//Fill stack with 7 (any) values
	double d = 1.00234;
	while(doubleStack.size() < 7)
	{
		d = 1.1 * d;
		doubleStack.push(d);
		std::cout << doubleStack.top() << '\t';
	}

	//doubleStack.push(1099.986); //Error, stack is full

	std::cout << '\n' << "Take 4 elements of the double stack: " << '\n';
	for(i = 0; i < 4; ++i)
	{
		std::cout << doubleStack.top() << '\t';
		doubleStack.pop();
	}
	std::cout << '\n';

	std::cout << "Remaining amount: " << doubleStack.size() << '\n';

	std::cout << "Clear stack" << '\n';
	doubleStack.clear();
	std::cout << "Amount: " << doubleStack.size() << '\n';

	//doubleStack.pop(); //Error, stack is empty
	std::cout << '\n';

	std::cout << "Press Enter to continue . . . ";
	std::cin.get();
	return 0;
}