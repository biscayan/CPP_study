#include <iostream>
using namespace std;

class Base
{
private:
	int m_i;

public:
	Base(int value)
		:m_i(value)
	{}

	void print()
	{
		cout << "I'm Base" << endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Base& b)
	{
		out << "This is Base output" << endl;
		return out;
	}
};

class Derived : public Base
{
private:
	double m_d;

public:
	Derived(int value)
		:Base(value)
	{}

	void print()
	{
		cout << "I'm Derived" << endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Derived& d)
	{
		cout << static_cast<Base>(d); // derived¸¦ Base·Î static cast
		out << "This is Derived output" << endl;
		return out;
	}
};

int main()
{
	Base base(5);
	Derived derived(7);

	base.print(); // I'm Base
	derived.print(); // I'm Derived
	derived.Base::print(); // I'm Base

	cout << base; // This is Base output
	cout << derived; // This is Base output // This is Derived output

	return 0;
}