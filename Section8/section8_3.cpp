#include <iostream>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	// constructor
	Fraction(const int & numer_input, const int & denom_input)
	{
		m_numerator = numer_input;
		m_denominator = denom_input;
	}

	void print()
	{
		cout << m_numerator << "/" << m_denominator << endl;
	}
};

int main()
{
	Fraction frac1(1,2);
	Fraction frac2(2,4);

	frac1.print(); // 1/2
	frac2.print(); // 2/4

	return 0;
}