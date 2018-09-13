#pragma once

#include <string>

enum class Sex
{
	Male,
	Female
};

class Person
{
public:
	Person(std::string Name, unsigned int Age, Sex sex);

	std::string getName() const;
	unsigned int getAge() const;
	std::string getSex() const;

	void setName(const std::string& NewName);
	void setAge(unsigned int NewAge);
	void setSex(Sex sex);

private:
	std::string m_name;
	unsigned int m_age;
	Sex m_sex;
};