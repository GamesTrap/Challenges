# Challenges

A collection of challenges I made to for C++.  
Status: [![Build Status](https://travis-ci.com/GamesTrap/Challenge.svg?branch=master)](https://travis-ci.com/GamesTrap/Challenge)

## Programs

- Challenge 1
	- Write a program that outputs the largest possible signed/unsigned int number (char, short, int, long, long long)
	- Without knowing the number of bits used internally in the system for each data type.
	- Hints:
		- Study the possible operators for whole numbers.
		- The ~-Operator inverts all bits, making the maximum largest unsigned number of 0.
		- For signed numbers one bit is used for the sign (two's complement representation).
	- [Solution](Challenge1/src/main.cpp)