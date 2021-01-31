#include <iostream>

using namespace std;

int main()
{
	int base, exponent;
	unsigned long int power = 1;

	do
	{
		cout << "밑을 입력하세요 (음이 아닌 정수) : ";
		cin >> base;
	} while (base < 0);

	do
	{
		cout << "지수를 입력하세요 (음이 아닌 정수) : ";
		cin >> exponent;
	} while (exponent < 0);

	for (int i = 1; i <= exponent; i++)
	{
		power *= base;
	}

	cout << base << "의 " << exponent << "제곱은 " << power << "입니다." << endl;

	return 0;
}