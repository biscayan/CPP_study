#include <iostream>
using namespace std;

class Base
{
public:
	virtual void func1() {};
	virtual void func2() {};
};

class Derived : public Base
{
public:
	virtual void func1() {};
	virtual void func3() {};
};

int main()
{
	cout << sizeof(Base) << endl; //4 size of pointer about table
	cout << sizeof(Derived) << endl; //4

	return 0;
}