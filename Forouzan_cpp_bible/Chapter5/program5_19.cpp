#include <iostream>

using namespace std;

int main()
{
	// declaration
	int n;
	unsigned long long factorial = 1;
	
	// validation
	do
	{
		cout << "���丮���� ũ�⸦ �Է��ϼ��� : ";
		cin >> n;
	} while (n < 0);

	// calculation
	for (int i = 1; i <= n; i++)
	{
		factorial *= i;
	}

	// result
	cout << n << "! = " << factorial << endl;

	return 0;
}