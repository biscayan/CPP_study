#include <iostream>

int main()
{
	using namespace std;

	int x = 1; //initialization
	cout << "Before your number was " << x << endl;

	cout << "Input new number" << endl;

	cin >> x;

	cout << "Now your number is " << x << endl;

	return 0;
}