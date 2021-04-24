#include <iostream>

using namespace std;

class Digit
{
private:
	int m_digit;
public:
	Digit(int d = 0);

	friend ostream& operator << (ostream& out, const Digit& d);

	// prefix
	Digit& operator ++ ();
	
	//post
	Digit operator ++ (int);
};

Digit::Digit(int d)
	:m_digit(d)
{}

ostream& operator << (ostream& out, const Digit& d)
{
	out << d.m_digit;
	return out;
}

Digit& Digit::operator ++ ()
{
	++ m_digit;
	return *this;
}

Digit Digit::operator ++ (int)
{
	Digit temp(m_digit);
	++(*this);

	return temp;
}

int main()
{
	Digit digit(10);

	cout << ++digit << endl; //11
	cout << digit << endl; //11
	cout << digit++ << endl; //11
	cout << digit << endl; //12

	return 0;
}
