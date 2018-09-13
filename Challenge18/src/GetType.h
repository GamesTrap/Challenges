#pragma once

#include <string>

//Template
template <typename T>
std::string getType(T)
{
	return "unknown type!";
}

//Template specialisation
template<>
inline std::string getType(int)
{
	return "int";
}

template<>
inline std::string getType(unsigned int)
{
	return "unsigned int";
}

template<>
inline std::string getType(char)
{
	return "char";
}

template<>
inline std::string getType(bool)
{
	return "bool";
}

/*
template<>
inline std::string getType(float)
{
	return "float";
}
*/