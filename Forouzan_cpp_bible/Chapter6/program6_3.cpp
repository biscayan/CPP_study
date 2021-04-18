#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const double PI = 3.141592653589793238462;
	double degree = PI / 4;

	cout << "sin(45) : " << sin(degree) << endl;
	cout << "cos(45) : " << cos(degree) << endl;
	cout << "tan(45) : " << tan(degree) << endl;

	return 0;
}