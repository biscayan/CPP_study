#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double x = 12345678.1234;

	//fixed format
	cout << "x의 고정 소수점 형식 : " << fixed << setprecision(4) << x <<endl; //12345678.1234

	//scientific format
	cout << "x의 과학 표기법 형식 : " << scientific<< x << endl; //1.234568e+07

	return 0;
}