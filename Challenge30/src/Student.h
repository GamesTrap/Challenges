#pragma once

#include <utility>
#include "Person.h"

class Student : public Person
{
public:
	Student(const std::string& firstname, const std::string& lastname, std::string studentNumber)
		: Person{ firstname, lastname }, m_studentNumber{std::move(studentNumber)}
	{		
	}

	std::string getStudentNumber() const
	{
		return m_studentNumber;
	}

	void setStudentNumber(const std::string& studentNumber)
	{
		m_studentNumber = studentNumber;
	}

	virtual std::string toString() const override
	{
		return "Student " + Person::toString() + ", Stud.No.: " + m_studentNumber;
	}

private:
	std::string m_studentNumber;
};
