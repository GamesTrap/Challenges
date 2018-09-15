#include "Member.h"

#include <iostream>
#include <utility>

Member::Member(std::string name)
	: m_name{std::move(name)}
{	
}

Member::~Member()
{
	for(auto known : m_known)
	{
		std::vector<Member*>& modify = known->m_known;
		for(std::size_t i = 0; i < modify.size(); ++i)
		{
			if(modify.at(i) == this) //found
			{
				//Delete by entering the last member there.
				//Then the vector is shortened by the last element.
				//(Iterators have not been treated yet.)
				modify.at(i) = modify.at(modify.size() - 1);
				modify.pop_back();
				break;
			}
		}
	}
}

void Member::getsToKnow(Member& member)
{
	if(&member != this && !knows(member)) //Ignore yourself | if unknown, add
	{
		m_known.push_back(&member);
		member.getsToKnow(*this); //Getting to know each other
	}
}

bool Member::knows(const Member& member) const
{
	bool res{ false };

	for(auto known : m_known)
	{
		if(&member == known)
		{
			res = true;
			break;
		}
	}

	return res;
}

void Member::printKnown() const
{
	for (auto known : m_known)
		std::cout << ' ' << known->giveName();
	std::cout << '\n';
}

const std::string& Member::giveName() const
{
	return m_name;
}