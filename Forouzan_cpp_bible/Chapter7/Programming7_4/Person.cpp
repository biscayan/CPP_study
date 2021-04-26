#include "Person.h"

Person::Person(string name, int age)
	:m_name(name), m_age(age)
{}

Person::~Person()
{}

string Person::getName() const
{
	return m_name;
}

int Person::getAge() const
{
	return m_age;
}

void Person::setName(string name)
{
	m_name = name;
}

void Person::setAge(int age)
{
	m_age = age;
}