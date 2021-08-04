#include <iostream>
using namespace std;

class Mother
{
private:
	int m_i;

public:
	Mother(const int& i_in = 0)
		:m_i(i_in)
	{
		cout << "Mother constructor" << endl;
	}
};

class Child : public Mother
{
private:
	double m_d;

public:
	Child()
		:Mother(1024), m_d(1.0)
	{
		cout << "Child constructor" << endl;
	}
};

int main()
{
	// construction : Mother -> Child
	// destruction : Child -> Mother
	Mother mother;
	Child child;

	cout << sizeof(mother) << endl; // 4
	cout << sizeof(child) << endl; // 16 contain the size of Mother class

	return 0;
}