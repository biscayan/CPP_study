#include <iostream>
using namespace std;

class A
{
public:
	A(int x) : m_x(x)
	{
		if (x <= 0)
			throw 1;
	}

private:
	int m_x;
};

class B : public A
{
public:
	B(int x) try : A(x)
	{}
	catch (...)
	{
		cout << "Catch in B consturctor" << endl;
	}
};

// function try
void doSomething()
try
{
	throw - 1;
}
catch (...)
{
	cout << "Catch in doSomething()" << endl;
}


int main()
{
	try
	{
		doSomething(); // Catch in doSomething()
		B b(0); // Catch in B consturctor
	}
	catch (...)
	{
		cout << "Catch in Main()" << endl; // Catch in Main()
	}

	return 0;
}