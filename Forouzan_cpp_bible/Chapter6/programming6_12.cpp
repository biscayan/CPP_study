#include <iostream>

using namespace std;

int FtoC(double fahrenheit)
{
	double celsius = (fahrenheit - 32) * (100.0 / 180.0);

	return celsius;
}

int main()
{
	cout << FtoC(32) << endl;
	cout << FtoC(98.6) << endl;
	cout << FtoC(104) << endl;
	cout << FtoC(212) << endl;

	return 0;
}