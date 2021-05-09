#pragma once

#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
	string m_name;
	int m_score;
	char m_grade;

public:
	Student();
	Student(string name, int score);
	~Student();
	void print();
};