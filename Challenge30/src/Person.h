#pragma once

#include <string>
#include <utility>

class Person
{
public:
	Person(std::string firstname, std::string lastname)
		: m_firstname{std::move(firstname)}, m_lastname{std::move(lastname)}
	{		
	}

	virtual ~Person() = default; //Rule of five
	Person (const Person&) = default; //Rule of five
	Person (Person&& person) = default; //Rule of five
	Person& operator=(const Person&) = default; //Rule of five
	Person& operator=(Person&& person) = default; //Rule of five

	void setFirstname(const std::string& firstname)
	{
		m_firstname = firstname;
	}
		
	void setLastname(const std::string& lastname)
	{
		m_lastname = lastname;
	}

	std::string getFirstname() const
	{
		return m_firstname;
	}

	std::string getLastname() const
	{
		return m_lastname;
	}

	virtual std::string toString() const = 0;

private:
	std::string m_firstname;
	std::string m_lastname;
};

inline std::string Person::toString() const
{
	return m_firstname + ' ' + m_lastname;
}