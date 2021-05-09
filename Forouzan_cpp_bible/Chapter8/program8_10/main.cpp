#include "student.h"

int main()
{
	const int SIZE = 5;

	Student students[SIZE];

	students[0] = Student("HJ", 98);
	students[1] = Student("MW", 77);
	students[2] = Student("KB", 82);
	students[3] = Student("JE", 35);
	students[4] = Student("NY", 64);

	for (int i = 0; i < SIZE; i++)
	{
		students[i].print();
	}

	return 0;
}