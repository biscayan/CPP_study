#pragma once

#include <string>
#include <iostream>

class Person
{
private:
	std::string m_name;

public:
	Person(const std::string & name_in)
		:m_name(name_in)
	{}

	// child class에서 중복되는 것은 mother class에서 정의
	void setName(const std::string& name_in)
	{
		m_name = name_in;
	}

	std::string getName() const
	{
		return m_name;
	}

	void doNothing() const
	{
		std::cout << m_name << " is doing nothing" << std::endl;
	}
};