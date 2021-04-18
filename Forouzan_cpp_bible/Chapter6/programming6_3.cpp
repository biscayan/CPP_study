#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{	
	double pi = M_PI;

	// a
	cout << sin(0) << endl; //0
	cout << sin(pi) << endl; //1.22465e-16

	// b
	cout << cos(0) << endl; //1
	cout << cos(pi) << endl; //-1

	// c
	cout << tan(0) << endl; //0
	cout << tan(1) << endl; //1.55741

	// d
	cout << asin(0) << endl; //0
	cout << asin(1) << endl; //1.5708

	// e
	cout << acos(0) << endl; //1.5708
	cout << acos(1) << endl; //0

	// f
	cout << atan(0) << endl; //0
	cout << atan(1) << endl; //0.785398

	return 0;
}