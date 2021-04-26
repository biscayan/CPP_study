#pragma once
#include <string>
#include <iostream>

using namespace std;

class Person
{
private:
	string m_name;
	int m_age;

public:
	Person(string name, int age);
	~Person();

	string getName() const;
	int getAge() const;

	void setName(string name);
	void setAge(int age);
};