#include <iostream>
#include <cassert>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction(int numer = 0, int denom =1)
		:m_numerator(numer), m_denominator(denom)
	{
		assert(denom != 0);
	}

	Fraction(const Fraction& fraction)
		:m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
	{
		cout << "Copy constructor is called" << endl;
	}

	friend ostream& operator << (ostream& out, const Fraction& frac)
	{
		cout << frac.m_numerator << "/" << frac.m_denominator << endl;
		return out;
	}
};

int main()
{
	Fraction frac(3, 5);

	// 복사 생성자 호출 o
	Fraction frac_copy(frac);
	Fraction frac_copy2 = frac;

	// 복사 생성자 호출 x
	Fraction frac_copy3(Fraction(3, 5));

	cout << frac << frac_copy << endl;

	return 0;
}