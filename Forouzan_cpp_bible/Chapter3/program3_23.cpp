#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double x = 12345678.1234;

	//fixed format
	cout << "x�� ���� �Ҽ��� ���� : " << fixed << setprecision(4) << x <<endl; //12345678.1234

	//scientific format
	cout << "x�� ���� ǥ��� ���� : " << scientific<< x << endl; //1.234568e+07

	return 0;
}