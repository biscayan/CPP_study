#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
	int m_class;
	string m_name;

public:
	Student(const int& class_in, const string& name_in)
		: m_class(class_in), m_name(name_in)
	{}

	Student(const string& name_in)
		: Student(0, name_in) //위임생성자
	{}

	void print()
	{
		cout << m_class << " " << m_name << endl;
	}
};

int main()
{
	Student HJ("Hyeongju");
	Student WR(1, "Waren");

	HJ.print();
	WR.print();

	return 0;
}