#include "IntAmount.h"

#include <iostream>
#include <cassert>

IntAmount::IntAmount() : m_amount{0} 
{}

void IntAmount::add(const int element)
{
	if(!isMember(element)) //Else ignore
	{
		if (m_amount < m_values.size())
			m_values.at(m_amount) = element;
		else //Not enough space
			m_values.push_back(element);

		++m_amount;
	}
}

void IntAmount::remove(const int element)
{
	const int where = find(element);
	if (where > -1)
		m_values.at(where) = m_values.at(--m_amount);
}

bool IntAmount::isMember(const int element) const
{
	return find(element) > -1;
}

std::size_t IntAmount::size() const
{
	return m_amount;
}

void IntAmount::display()
{
	for (std::size_t i = 0; i < m_amount; ++i)
		std::cout << m_values.at(i) << "   ";
	std::cout << '\n';
}

void IntAmount::clear()
{
	m_amount = 0;
}

int IntAmount::find(const int element) const
{
	for (std::size_t i = 0; i < m_amount; ++i)
		if (m_values.at(i) == element)
			return i;

	return -1; //Not found
}

int IntAmount::getMin()
{
	assert(m_amount > 0);
	int res = m_values.at(0);

	for (std::size_t i = 1; i < m_amount; ++i)
		if (m_values.at(i) < res)
			res = m_values.at(i);

	return res;
}

int IntAmount::getMax()
{
	assert(m_amount > 0);
	int res = m_values.at(0);

	for (std::size_t i = 1; i < m_amount; ++i)
		if (m_values.at(i) > res)
			res = m_values.at(i);

	return res;
}