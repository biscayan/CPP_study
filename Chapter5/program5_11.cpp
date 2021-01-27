#include <iostream>
#include<iomanip>

using namespace std;

int main()
{

	int startday;
	int days;
	int col = 1;

	// 날짜 수 유효성 검사
	do
	{
		cout << "한 달의 날짜 수를 입력하세요 (28, 29, 30, 31) : ";
		cin >> days;
	} while (days < 28 || days > 31);

	// 시작 요일 유효성 검사
	do
	{
		cout << "첫 날의 요일을 입력하세요 (0~6) : ";
		cin >> startday;
	} while (startday < 0 || startday > 6);

	// 달력의 header 출력
	cout << "Sun Mon Tue Wed Thu Fri Sat" << endl;
	cout << "--- --- --- --- --- --- ---" << endl;

	// 달력 첫 줄에 여백 추가
	for (int space = 0; space < startday; space++)
	{
		cout << "    ";
		col++;
	}

	// 달력 날짜 출력
	for (int day = 1; day < days+1; day++)
	{
		cout << setw(3) << day << " ";
		col++;

		if (col > 7)
		{
			cout << endl;
			col = 1;
		}
	}

	return 0;
}