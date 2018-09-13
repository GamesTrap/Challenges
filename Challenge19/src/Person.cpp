#include "Person.h"

#include <utility>

Person::Person(std::string Name, const unsigned int Age, const Sex sex)
	: m_name{std::move(Name)}, m_age{Age}, m_sex{sex}
{	
}


std::string Person::getName() const
{
	return m_name;
}

unsigned Person::getAge() const
{
	return m_age;
}

std::string Person::getSex() const
{
	if (m_sex == Sex::Male)
		return "male";

	return "female";
}


void Person::setName(const std::string& NewName)
{
	m_name = NewName;
}

void Person::setAge(const unsigned int NewAge)
{
	m_age = NewAge;
}

void Person::setSex(const Sex sex)
{
	m_sex = sex;
}