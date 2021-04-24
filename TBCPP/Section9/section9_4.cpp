#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Cents
{
private:
	int m_value;

public:
	Cents(int val);
	int getCents() const;

	friend std::ostream& operator <<(std::ostream& out, const Cents& cents);
	friend bool operator == (const Cents& c1, const Cents& c2);
	friend bool operator < (const Cents& c1, const Cents& c2);
};

Cents::Cents(int val)
	: m_value(val)
{}

int Cents::getCents() const
{
	return m_value;
}

std::ostream& operator <<(std::ostream& out, const Cents& cents)
{
	out << cents.m_value;
	return out;
}

bool operator == (const Cents& c1, const Cents& c2)
{
	return c1.m_value == c2.m_value;
}

bool operator < (const Cents& c1, const Cents& c2)
{
	return c1.m_value < c2.m_value;
}

int main()
{
	Cents cents1(1);
	Cents cents2(2);
	Cents cents3(0);

	if (cents1 == cents2)
	{
		cout << "Equal" << endl;
	}
	else
	{
		cout << "Not equal" << endl;
	}

	if (cents1 < cents3)
	{
		cout << cents1 << " is smaller than " << cents2 << endl;
	}
	else
	{
		cout << cents1 << " is bigger than " << cents2 << endl;
	}

	return 0;
}