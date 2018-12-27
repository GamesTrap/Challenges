#include <iostream>
#include <string>
#include <fstream>

bool CheckName(std::string& name)
{
	for(auto& c : name)
		if (!isalpha(c) && c != ' ')
			return false;

	return true;
}

std::string GetName()
{
	std::string temp;

	std::cout << "Please enter your name(with spaces): ";
	std::getline(std::cin, temp);

	while (!CheckName(temp))
	{
		std::cout << "Your name is invalid! Please try again: ";
		std::getline(std::cin, temp);
	}

	return temp;
}

bool CheckAge(std::string& temp)
{
	for(auto& c : temp)
		if (!isdigit(c))
			return false;

	return true;
}

int GetAge()
{
	std::string temp;

	std::cout << "Please enter your age: ";
	std::getline(std::cin, temp);

	while(!CheckAge(temp))
	{
		std::cout << "Your age is invalid! Please try again: ";
		std::getline(std::cin, temp);
	}

	return std::stoi(temp);
}

std::string GetNickName()
{
	std::string temp;

	std::cout << "Please enter your nickname: ";
	std::getline(std::cin, temp);

	return temp;
}

void SaveToFile(std::string& str)
{
	std::ofstream file;
	file.open("Log.txt");
	if(file.is_open())
		file << str;
	file.close();
}

int main()
{
	const std::string name = GetName();
	const int age = GetAge();
	const std::string nickname = GetNickName();

	std::string output = "Your name is " + name + ", you are " + std::to_string(age) + " years old and your username is " + nickname;

	std::cout << '\n' << output << '\n' << '\n';

	SaveToFile(output);

	std::cout << "Press Enter to continue . . . ";
	std::cin.get();
	return 0;
}