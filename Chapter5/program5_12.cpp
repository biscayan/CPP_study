#include <iostream>

using namespace std;

int main()
{
	int num, leftnum;

	// 숫자 입력받기
	cout << "음이 아닌 정수를 입력하세요 : ";
	cin >> num;

	do
	{
		leftnum = num % 10;
		num /= 10;

	} while (num > 0);

	cout << "제일 왼쪽에 있는 숫자는 " << leftnum << "입니다." <<endl;

	return 0;
}