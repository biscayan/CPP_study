#include <iostream>
using namespace std;

class Base
{
protected:
	int m_i;

public:
	Base(int value)
		:m_i(value)
	{}

	void print()
	{
		cout << "I'm Base" << endl;
	}
};

class Derived : public Base
{
private:
	double m_d;
	using Base::print; // do not add ()
	void print() = delete;

public:
	Derived(int value)
		:Base(value)
	{}

	using Base::m_i;
};

int main()
{
	Base base(5);
	Derived derived(7);

	derived.m_i = 1024;
	derived.print(); // it is impossible because (1) print is private (2) print is deleted
	base.print();

	return 0;
}