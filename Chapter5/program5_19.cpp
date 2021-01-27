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
		cout << "팩토리얼의 크기를 입력하세요 : ";
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