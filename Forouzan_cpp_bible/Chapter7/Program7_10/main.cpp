#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
	Fraction frac1;
	Fraction frac2(14,21);
	Fraction frac3(11,-8);
	Fraction frac4(frac3);

	frac1.setNumer(4);
	frac2.setDenom(-5);

	cout << "생성한 분수들을 출력합니다." << endl;
	
	cout << "Fraction1 : ";
	frac1.print();

	cout << "Fraction2 : ";
	frac2.print();

	cout << "Fraction3 : ";
	frac3.print();

	cout << "Fraction4 : ";
	frac4.print();

	return 0;
}