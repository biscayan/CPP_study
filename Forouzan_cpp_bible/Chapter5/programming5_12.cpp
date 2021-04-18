#include <iostream>

using namespace std;

int main()
{
	int year;

	cout << "연도를 입력하세요 (2000년 ~ 2099년) : ";
	cin >> year;

	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
	{
		cout << year << "년은 윤년입니다." << endl;
	}
	else
	{
		cout << year << "년은 윤년이 아닙니다." << endl;
	}

	return 0;
}