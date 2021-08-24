#include <iostream>
#include <string>

using namespace std;

class Base
{
public:
	int m_i = 0;

	virtual void print()
	{
		cout << "I'm Base" << endl;
	}
};

class Derived1 : public Base
{
public:
	int m_j = 1024;

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

class Derived2 : public Base
{
public:
	string m_name = "Dr. Two";

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

int main()
{
	Derived1 d1;
	Base* base = &d1;
	d1.m_j = 2048;

	auto* base_to_d1 = dynamic_cast<Derived1*>(base);
	cout << base_to_d1->m_j << endl;

	base_to_d1->m_j = 256;
	cout << d1.m_j << endl;

	// dynamic_cast puts null_ptr when it fails to cast 
	// can't convert d1->d2
	// Failed
	auto* base_to_d2 = dynamic_cast<Derived2*>(base);
	if (base_to_d2 != nullptr)
		base_to_d2->print();
	else
		cout << "Failed" << endl;

	// I'm derived
	auto* base_to_d1_2 = static_cast<Derived1*>(base);
	if (base_to_d1_2 != nullptr)
		base_to_d1_2->print();
	else
		cout << "Failed" << endl;

	// static_cast is possible
	// I'm derived
	auto* base_to_d2_2 = static_cast<Derived2*>(base);
	if (base_to_d2_2 != nullptr)
		base_to_d2_2->print();
	else
		cout << "Failed" << endl;

	// dynamic_cast는 런타임에 체크를 해서 아닌 것 같은 경우 nullptr를 넣어 주나
	// static_cast는 그런 기능이 없고 무조건 형변환함

	return 0;
}