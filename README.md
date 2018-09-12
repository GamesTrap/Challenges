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
	- Output the result
	- [Solution](Challenge16/src/main.cpp)