# Challenges

A collection of challenges I made for C++.  
Status: [![Build Status](https://travis-ci.com/GamesTrap/Challenges.svg?branch=master)](https://travis-ci.com/GamesTrap/Challenges)

## Programs

- Challenge 1
	- Write a program that outputs the largest possible signed/unsigned int number (char, short, int, long, long long)
	- Without knowing the number of bits used internally in the system for each data type.
	- Hints:
		- Study the possible operators for whole numbers.
		- The ~-Operator inverts all bits, making the maximum largest unsigned number of 0.
		- For signed numbers one bit is used for the sign (two's complement representation).
	- [Solution](Challenge1/src/main.cpp)

- Challenge 2
	- Write a program that requires three integers as input
	- The first is meant as the beginning of a range of numbers
	- The second as the end of the range
	- The program should check if the third number is within the range including the limits
	- Output a corresponding message
	- Output an error message if the number for the beginning > the number for the end
	- [Solution](Challenge2/src/main.cpp)

- Challenge 3
	- Write a program that requires three integers as input
	- Output the biggest number of the three integers
	- [Solution](Challenge3/src/main.cpp)

- Challenge 4
	- Write a program that requires an integer as input
	- Create a loop that outputs a given number in binary
	- Use bit operations to check which bits of the number are set
	- Hints:
		- Use the number 1, shifted by 0 to e.g. 31 bit positions, as a mask
	- Possible results:
		-  5 -> 00000000000000000000000000000101
		- -5 -> 11111111111111111111111111111011
	- [Solution](Challenge4/src/main.cpp)

- Challenge 5
	- Write a program that calculates the sum of all natural number from n1 to n2
	- a) With a for loop
	- b) With a while loop
	- c) With a do while loop
	- d) Without a loop
	- Assume n2 >= n1
	- [Solution](Challenge5/src/main.cpp)

- Challenge 6
	- Write a struct called Person:
		- String Firstname
		- String Lastname
		- Int Age
	- Use cin(input via keyboard) to assign values to the struct
	- Output entered values via struct
	- [Solution](Challenge6/src/main.cpp)

- Challenge 7
	- Write a program that requires a string that represents a natural number and only consists of digits as input
	- Example:
		- "17462309"
	- a) Convert the string to a number x of type long
	- b) Calculate the checksum of z
	- Output the converted number and the checksum
	- [Solution](Challenge7/src/main.cpp)

- Challenge 8
	- Write a program that requires a natural number as input
	- Convert the input to a Roman number
		- const string CHARACTERS = "IVXLCDM"
	- Syntax rules
		- No digit except 'M' is allowed more than three times in a row
	- Example
		- Input: "4" = "IIII" is wrong
		- Input: "4" = "IV" is right
	- Output the converted number
	- [Solution](Challenge8/src/main.cpp)

- Challenge 9
	- Write a program that can read any number in the range of -99 to +100(inclusive)
	- The number range is divided into 10 equal large intervals
	- Once a number outside the range is entered, end the input
	- Output for each interval how many numbers have been entered
	- Hints:
		- Use const for -99, +100 and so on
		- Use a vector<int> to save the intervals
	- [Solution](Challenge9/src/main.cpp)

- Challenge 10
	- Write a program that requires a natural number > 0
	- 1.
		- If the number is even, divide by 2
		- If not, multiply it by 3 and add 1
	- 2.
		- If the resulting number is greater than 1, apply step a again
		- If not, the process is finished
	- Output every result from the algorithm
	- Output every new biggest number and add a pause
	- Output how many iterations were needed
	- [Solution](Challenge10/src/main.cpp)

- Challenge 11
	- Write a program that prints the contents of a file in hexadecimal form
	- First output 16 letters then the 16 associated hex codes per line
	- [Solution](Challenge11/src/main.cpp)

- Challenge 12
	- Write a program that outputs statistics for a text file
	- Example:
		- Number of characters = 16437
		- Number of words = 2526
		- Number of lines = 220
	- A word is defined as an uninterrupted sequence of character
	- Umlauts do not count as characters because they are not part of ASCII
	- The number of characters should not contain the end-of-line identifier
	- [Solution](Challenge12/src/main.cpp)

- Challenge 13
	- 1.
		- Write a program that can read any number of entries from a file like below
		- Example.txt
	  	```
		Bob Ross
		123456
		Kappa Pride
		746453
		Kappa Claus
		6329430
		#
	  	```
	  	- Use a struct named Student.
	  	- It should contain the name and the associated student number as a string
	  	- The data should be saved in a vector<Student>
	  	- Output the contents of the vector
	 - 2.
	 	- Ask for a student number
	 	- Output name(or "not found")
	 	- Do step 2 again until the user enters 'x' or 'X'
	- [Solution](Challenge13/src/main.cpp)

- Challenge 14
	- Write a program that requires 3 integers
	- Ask for hours, minutes and seconds
	- Create a function called ConvertToSeconds(int hours, int minutes, int seconds)
	- Convert the user input to seconds
	- Output total seconds
	- [Solution](Challenge14/src/main.cpp)

- Challenge 15
	- Write a program that requires 1 double and 1 int
	- Ask for a double number and int exponent
	- Create a function called power(x, y)
	- Calculate the power with the function
	- Output the result
	- [Solution](Challenge15/src/main.cpp)

- Challenge 16
	- Write a program that requires a string
	- Create a function called reverseString(String)
		- Reverse the order of the characters in the string
	- Output result
	- [Solution](Challenge16/src/main.cpp)

- Challenge 17
	- Write a program that requires a string
	- Create a function called isAlphanumerical(String)
		- Return true if string only contains letters and digits
		- Else return false
	- Output result
	- [Solution](Challenge17/src/main.cpp)

- Challenge 18
	- Write a template function getType(T)
	- Use template specialisation to return the type of the parameter T as string
	- [Solution](Challenge18/src/)

- Challenge 19
	- Create a class called Person
		- Attribute: Name, Age, Sex
		- Methods: getName(), getAge(), getSex(), setName(), setAge(), setSex()
	- Create enum class Sex
		- Male, Female
	- Create instance of Person with name = Kappa Pride, age = 1337, sex = male
	- Output name and age of person
	- Output name and sex of person
	- Add 1 year to current age
	- Output name and new age of person
	- Change lastname to Claus
	- Output new name
	- [Solution](Challenge19/src/)

- Challenge 20
	- Create a class called IntAmount
		- void add(int)
		- void remove(int)
		- bool isMember(int)
		- std::size_t size()
		- void display()
		- void clear()
		- int getMax()
		- int getMin()
		- To save values add vector<int>
	- Example usage:
	```
	IntAmount amount;

	amount.add(2);
	amount.add(-9);
	amount.add(2);
	amount.remove(99);
	amount.remove(-9);
	amount.display();
	amount.clear();

	for(int i = 17; i < 33; ++i)
		amount.add(i * i);

	std::cout << "Amount: " << amount.size() << " Minimum: " << amount.getMin() << '\n';
	std::cout << "amount.isMember(1337) " << amount.isMember(1337) << '\n';
	```
	- [Solution](Challenge20/src)

- Challenge 21
	- Write a function void strcopy(char* target, const char* source)
	- Copy the content of the string source into the string target
	- Overwrite the previous content of target
	- It is required that target is big enough to copy source into target
	- [Solution](Challenge21/src/main.cpp)

- Challenge 22
	- Write a function char* strDuplicate(const char* s)
	- Create a duplicate of s with new
	- Return a pointer to the beginning of the duplicate
	- [Solution](Challenge22/src/main.cpp)

- Challenge 23
	- Write a program that sorts the array below in Alphabetical order
	- Given is: const char *sField[]={"one","two","three","four","five","six","seven","eight",nine","ten"};
	- [Solution](Challenge23/src/main.cpp)

- Challenge 24
	- Write a function void removeSpaces(char* s)
		- Remove all spaces from s
	- Example: "a bb   ccc" = "abbccc"
	- Use pointers
	- [Solution](Challenge24/src/main.cpp)

- Challenge 25
	- Write a program that outputs file names defined from command line
	- Example: Challenge25 file1.cpp XXX file2.cpp
		- Output file1.cpp and file2.cpp in console
		- If file XXX is not found output error message: "File XXX not found!"
	- [Solution](Challenge25/src/main.cpp)

- Challenge 26
	- Write a program tat prints all names from a file
		- It starts with a letter, then follow any number of letters and numbers
		- Underscore also counts as a letter
	- [Solution](Challenge26/src/main.cpp)

- Challenge 27
	- Write a class Format
		- Formatting numbers
		- Automatically extend width to avoid information loss
	- Example usage:
	```
	Format f(12, 3); //Output 12 characters wide, 3 decimal places
	std::cout << f.toString(789,906625) << '\n'; //= SSSSS789,907 | S = empty space
	std::cout << f.toString(-123456789.906625) << '\n'; //= -123456789,907
	```
	- [Solution](Challenge27/src)

- Challenge 28
	- Simulate a party
		- Example
		```
        int main()
        {
            Member otto("Otto");
          	Member andrea("Andrea");
          	Member jens("Jens");
          	Member silvana("Silvana");
          	Member miriam("Miriam");
          	Member paul("Paul");
          	//Vector with memory addresses
          	std::vector<Member*> all {&otoo, &andrea, &jens, &silvana, &miriam, &paul};
          	andrea.getsToKnow(jens);
          	silvana.getsToKnow(otto);
          	paul.getsToKnow(otto);
          	paul.getsToKnow(silvana);
          	miriam.getsToKnow(andrea);
          	jens.getsToKnow(miriam);
          	jens.getsToKnow(silvana);
          	if(jens.knows(andrea))
          	    std::cout << "Jens knows Andrea" << '\n';
          	//Output of all members indicating who knows whom:
          	for(auto memberPtr : all)
          	{
          	    std::cout << memberPtr->giveName() << " knows: ";
          	    memberPtr->printKnown();
            }
        }
		```
	- Create class Member
		- getsToKnow(Member&) //To get to know each other
		- knows(Member&)
		- giveName()
		- void printKnown()
		- std::vector<std::string> known
		- "alex.getsToKnow(alex);" should be ignored
	- Vector<Member*>
		- Use it to output names and known
		- Point to the original object with pointers
	- Hint:
		- Comparison of the addresses of two objects shows whether they are identical
		- Copies can be the same, but they are different objects
	- [Solution](Challenge28/src)