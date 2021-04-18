#include <iostream>

int main()
{
	using namespace std;

	int x;

	cout << "Is it even or odd? ", cin >> x;

	if (x % 2 == 1)
		cout << "It is odd number" << endl;
	else
		cout << "It is even number" << endl;

	return 0;
}