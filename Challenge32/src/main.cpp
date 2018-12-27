#include <iostream>
#include <random>
#include <chrono>

int main()
{
	//Random generator
	std::mt19937 rng;
	rng.seed(std::random_device()());
	const std::uniform_int_distribution<std::mt19937::result_type> dist(0, 100); //Distribution range 0-100

	bool finished = false;
	unsigned int guess = dist(rng); //Random starting value
	unsigned int high = 100, low = 0;
	char c;
	unsigned int count = 0; //Keep track of how many guesses were needed

	std::cout << "Think about a number between 0-100 and let me guess it :D" << '\n';
	while(!finished)
	{
		std::cout << "Is your number " << guess << "? (Y)es, it's (h)igher, it's (l)ower" << '\n';
		std::cin >> c;

		//Check Input
		if (c == 'y' || c == 'Y')
			finished = true; //I Won
		else if (c == 'h' || c == 'H')
			low = guess;
		else if (c == 'l' || c == 'L')
			high = guess;
		else //Wrong Input
			std::cout << "Wrong Input! Try again" << '\n';

		//Guess range only 0-100!
		if (guess >= 100)
			guess = 100;
		else if (guess <= 0)
			guess = 0;

		//Set new guess
		guess = (high + low) / 2;

		++count;
	}

	std::cout << '\n' << "Your number is " << guess << ", and I only needed " << count << " guesses!" << '\n' << '\n';

	std::cout << "Press Enter to continue . . . ";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();
	return 0;
}
