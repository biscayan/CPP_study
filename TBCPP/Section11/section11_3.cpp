#include <iostream>
using namespace std;

class Mother
{
private:
	int m_i;

public:
	Mother(const int & i_in = 0)
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

class A
{
public:
	A()
	{
		cout << "A constructor" << endl;
	}
};

class B : public A
{
public:
	B()
	{
		cout << "B constructor" << endl;
	}
};

class C : public B
{
public:
	C()
	{
		cout << "C constructor" << endl;
	}
};

int main()
{
	// Initialize Child class after initializing Mother class
	Child child;

	// A->B->C
	C c;

	return 0;
}