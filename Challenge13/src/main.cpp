#include <iostream>

#include <fstream>
#include <string>
#include <vector>

struct Student
{
	std::string Name;
	std::string StudentNumber;
};

int main()
{
	std::string filename;
	std::vector<Student> students;

	//1.
	std::cout << "Please enter filename(with extension): ";
	std::cin >> filename;

	std::ifstream file(filename);
	if (!file)
		std::cerr << filename << " could not be opened!" << std::endl;
	else
	{
		while(file)
		{
			std::string line;
			std::getline(file, line);

			if (line == "#") //Ending found
				break;

			Student tmp;
			tmp.Name = line;
			std::getline(file, line);
			tmp.StudentNumber = line;
			students.push_back(tmp);
		}

		file.close();
		if (students.empty())
			std::cout << "no data found!" << '\n';
		else
		{
			for (auto student : students)
				std::cout << student.Name << ' ' << student.StudentNumber << '\n';
		}
		std::cout << '\n';

		//2.
		std::string searchNum;

		while (true)
		{
			std::cout << "Please enter a student number(or x to end): ";
			std::cin >> searchNum;

			if (searchNum == "X" || searchNum == "x")
				break;
			else
			{
				bool found = false;

				for (auto student : students)
				{
					if (searchNum == student.StudentNumber)
					{
						std::cout << student.Name << " found." << '\n';
						found = true;
						break;
					}
				}

				if (!found)
					std::cout << "not found!" << '\n';
			}
		}
		std::cout << '\n';
	}	

	std::cout << "Press Enter to continue . . . ";
	std::cin.ignore();
	std::cin.get();
	return 0;
}
