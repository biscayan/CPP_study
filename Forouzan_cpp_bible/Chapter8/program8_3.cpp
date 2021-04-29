#include <iostream>

using namespace std;

int main()
{
	int numDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int month;

	do
	{
		cout << "월을 입력하세요 : ";
		cin >> month;
	} while (month < 1 || month >12);

	cout << month << "월에는 " << numDays[month] << "개의 일이 있습니다." << endl;

	return 0;
}