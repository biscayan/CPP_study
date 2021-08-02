#include "Student.h"
#include "Teacher.h"

using namespace std;

int main()
{
	Student student("HJ", 90);
	student.setName("AS");
	cout << student.getName() << endl;

	Teacher teacher("QG", 53);
	teacher.setName("HS");
	cout << teacher.getName() << endl;

	cout << student << endl;
	cout << teacher << endl;

	student.doNothing();
	teacher.doNothing();

	student.study();
	teacher.teach();

	return 0;
}