#include <iostream>

using namespace std;

int main()
{
	int sum = 0;

	// 센티넬
	int num;

	cout << "정수를 입력하세요 (-1 입력시 프로그램 종료) : ";
	cin >> num;

	while (num != -1)
	{
		sum += num;

		cout << "정수를 입력하세요 (-1 입력시 프로그램 종료) : ";
		cin >> num;
	}

	cout << "숫자의 합 : " << sum << endl;

	return 0;
}