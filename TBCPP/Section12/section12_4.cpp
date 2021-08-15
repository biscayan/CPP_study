#include <iostream>
using namespace std;

class Base
{
public:
	virtual ~Base()
	{
		cout << "~Base()" << endl;
	}
};

class Derived : public Base
{
private:
	int* m_array;
	
public:
	Derived(int length)
	{
		m_array = new int[length];
	}

	~Derived()
	{
		cout << "~Derived" << endl;
		delete[] m_array;
	}
};

int main()
{
	// ~Derived -> ~Base
	// Derived derived(5);

	// ~Derived -> ~Base
	// can destruct the derived because of the virtual in the Base class
	Derived* derived = new Derived(5);
	Base* base = derived;
	delete base;

	return 0;
}