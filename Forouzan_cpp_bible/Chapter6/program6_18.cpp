#include <iostream>

using namespace std;

double calc_earning(double rate, double hours = 40);

int main()
{

	cout << "ö���� �ӱ� : " << calc_earning(35.0) << endl;
	cout << "������ �ӱ� : " << calc_earning(32.3, 42.0) << endl;

	return 0;
}

double calc_earning(double rate, double hours)
{
	double pay;

	pay = rate * hours;

	return pay;
}