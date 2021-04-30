#include <iostream>

using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents)
		:m_cents(cents)
	{}

	int getCents()
	{
		return m_cents;
	}
	void setCents(int cents)
	{
		m_cents = cents;
	}

	operator int()
	{
		return m_cents;
	}
};


class Dollars
{
private:
	int m_dollars;

public:
	Dollars(int dollars)
		:m_dollars(dollars)
	{}

	int getDollars()
	{
		return m_dollars;
	}

	void setDollars(int dollars)
	{
		m_dollars = dollars;
	}

	operator Cents()
	{
		return Cents(m_dollars * 100);
	}
};


void print(const int& value)
{
	cout << value << endl;
}


int main()
{
	Dollars dollar(2);
	Cents cent = dollar;

	print(cent); //200

	return 0;
}