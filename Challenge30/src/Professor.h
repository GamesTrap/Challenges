#pragma once

#include <utility>
#include "Person.h"

class Professor : public Person
{
public:
	Professor(const std::string& firstname, const std::string& lastname, std::string subjectArea)
		: Person{ firstname, lastname }, m_subjectArea{std::move(subjectArea)}
	{		
	}

	void setSubjectArea(const std::string& subjectArea)
	{
		m_subjectArea = subjectArea;
	}

	std::string getSubjectArea() const
	{
		return m_subjectArea;
	}

	virtual std::string toString() const override
	{
		return "Prof. " + Person::toString() + ", Subject area: " + m_subjectArea;
	}

private:
	std::string m_subjectArea;
};