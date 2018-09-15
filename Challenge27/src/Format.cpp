#include "Format.h"

Format::Format(const unsigned int width, const unsigned int decimalPlaces)
	: m_width{width}, m_decimalPlaces{decimalPlaces}
{
	if (m_decimalPlaces > 16)
		m_decimalPlaces = 16;

	if (m_width < m_decimalPlaces)
		m_width = m_decimalPlaces + 1;
}

std::string Format::toString(double d) const
{
	std::string result;
	bool negative{ false };

	if(d < 0.0)
	{
		negative = true;
		d = -d;
	}

	//Rounding
	double round{ 0.5 };
	for (unsigned int i = 0; i < m_decimalPlaces; ++i)
		round /= 10.0;
	d += round;

	//With the following normalization (i.e. number starts with 0,..) it is achieved that the number
	//of digits before the comma is known (placeValue).
	int placeValue = 0;
	//Normalize number if >= 1
	while(d >= 1.0)
	{
		++placeValue;
		d /= 10.0;
	}
	if (placeValue == 0)
		result += '0'; //At least a 0 before the comma

	//The number is successively multiplied by 10, which first determines the first digit (dig),
	//then separates it and appends it to the result string, and so on
	do
	{
		if (placeValue == 0)
			result += ','; //Comma
		d *= 10.0;
		const int dig = static_cast<int>(d);
		d -= dig;
		result += dig + '0';
		--placeValue;
	} while (static_cast<int>(m_decimalPlaces) * placeValue > 0);

	if(negative)
		result = '-' + result;

	const int diff = m_width - result.length();

	for (int i = 0; i < diff; ++i)
		result = ' ' + result;

	return result;
}
