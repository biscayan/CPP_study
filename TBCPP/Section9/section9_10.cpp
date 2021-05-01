#include <iostream>
#include <cassert>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	// char type�� ���� �� ����
	Fraction(char) = delete;

	// explicit�� ����ϸ� ���� ������ �־������
	// converting constructor�μ��� ����� �Ұ�����
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

// ��ȯ������
void doSomething(Fraction frac)
{
	cout << frac << endl;
}

int main()
{
	Fraction frac(3);

	//doSomething(7); explicit ������ �Ұ���

	doSomething(frac);

	//Fraction frac('c'); delete ������ �Ұ���

	return 0;
}