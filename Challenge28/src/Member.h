#pragma once

#include <string>
#include <vector>

class Member
{
public:
	explicit Member(std::string name);
	~Member();

	Member(const Member& member) = default; //Rule of five
	Member(Member&& member) = default; //Rule of five
	Member& operator=(const Member& member) = default; //Rule of five
	Member& operator=(Member&& member) = default; //Rule of five
	

	void getsToKnow(Member& member);
	bool knows(const Member& member) const;
	void printKnown() const;
	const std::string& giveName() const;

private:
	std::string m_name;
	std::vector<Member*> m_known;
};
