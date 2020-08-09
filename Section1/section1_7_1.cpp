#include <iostream>

using namespace std;

void Do_something(int x)
{
	x = 123;

	cout << x << endl;

}

int main()
{
	int x = 1;

	cout << x << endl;
	Do_something(x);
	cout << x << endl;

	return 0;

}