#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;

Tryagain:

	cout << "Enther a non-negative number : ";
	cin >> x;

	if (x < 0.0)
		goto Tryagain; //Tryagain이 이는 곳으로 이동

	cout << sqrt(x) << endl;

	return 0;
}