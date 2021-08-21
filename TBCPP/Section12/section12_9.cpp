#include <iostream>
#include <vector>
using namespace std;

class Base
{
public:
	int m_i = 0;

	virtual void print()
	{
		cout << "I'm base" << endl;
	}
};

class Derived : public Base
{
public:
	int m_j = 1;

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

int main()
{
	Derived d;
	Base& b = d;

	// object slicing : information of derived class is sliced
	// Base b = d;

	b.print(); // I'm derived

	Derived der;
	Base bas;

	// vector can't take reference
	// std::vector<Base&> my_vec;
	std::vector<std::reference_wrapper<Base>> my_vec;
	my_vec.push_back(bas); // I'm base
	my_vec.push_back(der); // I'm derived

	for (auto& ele : my_vec)
	{
		ele.get().print();
	}

	return 0;
}