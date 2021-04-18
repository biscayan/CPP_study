#include <iostream>

using namespace std;

int main()
{
	unsigned int num;

	cout << "두 자리의 양의 정수를 입력하세요 : ";
	cin >> num;

	int num1 = num / 10;
	int num2 = num % 10;

	cout << num2 << num1 << endl;

	return 0;
}