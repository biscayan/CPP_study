#include <iostream>

using namespace std;

int main()
{
	unsigned int num1, num2;

	cout << "2개의 양의 정수를 입력하세요 (범위->1~100) : ";
	cin >> num1 >> num2;

	cout << num1 << "과(와) " << num2 << "의 공약수 : ";

	for (int i = 1; i <= 100; i++)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			cout << i << " ";
		}
	}

	return 0;
}