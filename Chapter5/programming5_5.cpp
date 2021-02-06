#include <iostream>

using namespace std;

int main()
{
	unsigned int num1, num2;

	do
	{
		cout << "두 개의 양의 정수를 입력하세요 : ";
		cin >> num1 >> num2;
	} while (num1 < 0 || num2 < 0);
	
	cout << "홀수 : ";

	for (int i = num1; i <= num2; i++)
	{
		if (i % 2 == 1)
			cout << i << " ";
	}

	cout << endl;

	cout << "짝수 : ";

	for (int i = num1; i <= num2; i++)
	{
		if (i % 2 == 0)
			cout << i << " ";
	}

	cout << endl;

	return 0;
}