#include <iostream>
using namespace std;

class A
{
public:
	virtual void print() { cout << "A" << endl; }
	virtual A* getThis() { return this; }
};

class B : public A
{
public:
	// override : must override this function!
	// final : can't override the function in the child class
	void print() override final{ cout << "B" << endl; }
	virtual B* getThis() { return this; }
};

class C : public B
{
public:
	// can't override because of the final
	void print() { cout << "C" << endl; }
};