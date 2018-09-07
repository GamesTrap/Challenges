# Challenges

A collection of challenges I made to for C++.  
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