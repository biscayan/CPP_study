#include <iostream>

using namespace std;

class Cents
{
private:
	int m_value;

public:
	Cents(int val);
	int getCents() const;

	friend std::ostream& operator <<(std::ostream& out, const Cents& cents);

	Cents operator - () const;
	bool operator ! () const;
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

Cents Cents::operator - () const
{
	return Cents(-m_value);
}

bool Cents::operator ! () const
{
	return (m_value == 0) ? true : false;
}

int main()
{
	Cents cents1(1);
	Cents cents2(13);
	Cents cents3(0);

	cout << -cents1 << " " << cents2 << " " << -cents3 << endl; // -1 13 0
	cout << !cents2 << " " << !cents3 << endl; // 0 1
}