#include <iostream>

using namespace std;

// 주소를 전달하지만 내부적으로는 값을 전달하는 것이다.
void foo(int* ptr)
{
	cout << *ptr << " " << ptr << " " << &ptr << endl;
}

void Get_sin_cos(double degree, double* sin_out, double* cos_out)
{
	*sin_out = 1.0;
	*cos_out = 2.0;
}

int main()
{
	int value = 5;
	int* ptr = &value;
	
	cout << value << " " << &value << endl; // 5 0115F76C

	// 주소(포인터)를 전달
	foo(ptr); // 5 0115F76C 0115F68C
	foo(&value); // 5 0115F76C 0115F68C

	double degrees = 30;
	double sin, cos;

	Get_sin_cos(degrees, &sin, &cos);

	cout << sin << " " << cos; // 1.0 2.0

	return 0;
}