#include <iostream>
#include "Cents.h"

using namespace std;

int main()
{
	Cents cent1(6);
	Cents cent2(8);

	cout << cent1.getCents() << endl; //6
	cout << cent2.getCents() << endl; //8
	cout << (cent1 + cent2 + Cents(6)).getCents() << endl; //20
}