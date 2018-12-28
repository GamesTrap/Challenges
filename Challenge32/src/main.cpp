#include <iostream>
#include <random>
#include <string>

int main()
{
	//Random generator
	std::mt19937 rng(std::random_device{}());
	std::uniform_int_distribution<> dist{ 0, 100 }; //Distribution range 0-100

	bool finished = false;
	bool invalidInput = false;
	unsigned int guess = dist(rng); //Random starting value
	unsigned int high = 101, low = 0;
	std::string input;
	unsigned int count = 0; //Keep track of how many guesses were needed

	std::cout << "Think about a number between 0-100 and let me guess it :D" << '\n';
	while(!finished)
	{
		if(!invalidInput)
			std::cout << "Is your number " << guess << "? (Y)es, it's (h)igher, it's (l)ower" << '\n';
		std::getline(std::cin, input);

		//Reset invalidInput
		invalidInput = false;

		//Check Input
		if (input == "y" || input == "Y")
			finished = true; //I Won
		else if (input == "h" || input == "H")
			low = guess;
		else if (input == "l" || input == "L")
			high = guess;
		else //Wrong Input
		{
			std::cout << "Wrong Input! Try again" << '\n';
			invalidInput = true;
		}

		//Guess range only 0-100!
		if (guess > 100)
			guess = 100;

		//Set new guess
		guess = (high + low) / 2;

		++count;
	}

	std::cout << '\n' << "Your number is " << guess << ", and I only needed " << count << " guesses!" << '\n' << '\n';

	std::cout << "Press Enter to continue . . . ";
	std::cin.get();
	return 0;
}
