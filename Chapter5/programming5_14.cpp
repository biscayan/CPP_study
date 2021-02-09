#include <iostream>

using namespace std;

int main()
{
	int num;
	int reverse_num;

	cout << "양의 정수를 입력하세요 : ";
	cin >> num;

	cout << "입력된 숫자를 반대로 출력 : ";

	do
	{
		reverse_num = num % 10;
		num /= 10;

		cout << reverse_num;

	} while (num);

	return 0;
}