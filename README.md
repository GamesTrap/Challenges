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
	- [Solution](Challeng8/src/main.cpp)