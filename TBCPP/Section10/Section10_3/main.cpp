#include "Lecture.h"

int main()
{
	Student student1("HJ", 0);
	Student student2("NE", 1);
	Student student3("BK", 2);

	Teacher teacher1("Prof. Kim");
	Teacher teacher2("Prog. Park");

	Lecture lec1("Introduction to computer programming");
	lec1.assignTeacher(&teacher1);
	lec1.registerSturent(&student1);
	lec1.registerSturent(&student2);
	lec1.registerSturent(&student3);

	Lecture lec2("Computational thinking");
	lec2.assignTeacher(&teacher2);
	lec2.registerSturent(&student1);

	cout << lec1 << endl;
	cout << lec2 << endl;

	lec2.study();

	cout << lec1 << endl;
	cout << lec2 << endl;

	return 0;
}