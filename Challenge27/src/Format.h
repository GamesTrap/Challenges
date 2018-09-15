#pragma once

#include <string>

class Format
{
public:
	Format(unsigned int width, unsigned int decimalPlaces);
	std::string toString(double d) const;

private:
	unsigned int m_width;
	unsigned int m_decimalPlaces;
};