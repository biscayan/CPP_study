#pragma once

#include <vector>
#include "Student.h"
#include "Teacher.h"

using namespace std;

class Lecture
{
private:
	std::string m_name;

	Teacher * teacher;
	std::vector<Student*> students;

public:
	Lecture(const std::string & lec)
		:m_name(lec)
	{}

	~Lecture()
	{}

	void assignTeacher(Teacher* const teacher_in)
	{
		teacher = teacher_in;
	}

	void registerSturent(Student* const student_in)
	{
		students.push_back(student_in);
	}

	void study() 
	{
		cout << "After " << m_name << " study" << endl << endl;

		for (auto& elem : students)
			elem->setIntel(elem->getIntel() + 1);
	}

	friend std::ostream& operator<< (std::ostream& out, const Lecture& lec_in) 
	{
		out << lec_in.m_name << endl;
		out << *(lec_in.teacher) << endl;

		for (auto& elem : lec_in.students)
			out << *elem << endl;

		return out;
	}
};