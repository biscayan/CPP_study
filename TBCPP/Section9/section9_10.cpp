#include <iostream>
#include <cassert>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	// char type은 넣을 수 없음
	Fraction(char) = delete;

	// explicit을 사용하면 값을 엄격히 넣어줘야함
	// converting constructor로서의 기능이 불가능함
	explicit Fraction(int numer = 0, int denom = 1)
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

// 변환생성자
void doSomething(Fraction frac)
{
	cout << frac << endl;
}

int main()
{
	Fraction frac(3);

	//doSomething(7); explicit 때문에 불가능

	doSomething(frac);

	//Fraction frac('c'); delete 때문에 불가능

	return 0;
}