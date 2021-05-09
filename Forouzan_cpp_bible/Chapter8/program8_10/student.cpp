#include "student.h"

Student::Student()
{}

Student::Student(string name, int score)
	:m_name(name), m_score(score)
{
	char arr[] = { 'F','F','F','F','F','F','D','C','B','A','A' };
	m_grade = arr[score / 10];
}

Student::~Student()
{}

void Student::print()
{
	cout << m_name << " " << m_score << " " << m_grade << endl;
}