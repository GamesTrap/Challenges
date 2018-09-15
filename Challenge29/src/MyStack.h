#pragma once

#include <vector>
#include <cassert>

template<typename T>
class MyStack
{
public:
	bool empty() const
	{
		return m_vec.empty();
	}

	auto size() const
	{
		return m_vec.size();
	}

	void clear() //Empty stack
	{
		m_vec.clear();
	}

	const T& top() const //See last element
	{
		assert(!empty()); //assert because back() is undefined

		return m_vec.back(); //Responds when m_vec is empty.
	}

	void pop() //Remove element
	{
		assert(!empty()); //assert because pop_back() is undefined

		m_vec.pop_back(); //Responds when m_vec is empty.
	}

	void push(const T& x) //Put x on the stack
	{
		m_vec.push_back(x);
	}

private:
	std::vector<T> m_vec; //Container for elements
};
