#pragma once
#include <vector>

class IntAmount
{
public:
	IntAmount();

	void add(int element);
	void remove(int element);
	void display();
	void clear();

	bool isMember(int element) const;

	std::size_t size() const;

	int getMax();
	int getMin();

private:
	std::size_t m_amount;
	std::vector<int> m_values;

	int find(int element) const;
};
