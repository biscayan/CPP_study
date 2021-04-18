#include <iostream>

using namespace std;

int CtoF(double celsius)
{
	double fahrenheit = celsius * 180.0 / 100.0 + 32;

	return fahrenheit;
}

int main()
{	
	cout << CtoF(0) << endl;
	cout << CtoF(37) << endl;
	cout << CtoF(40) << endl;
	cout << CtoF(100) << endl;

	return 0;
}