#include <iostream>

using namespace std;

int main()
{
	int total, hours, minutes, seconds;

	cout << "초 단위의 전체 시간을 입력하세요 : ";
	cin >> total;

	hours = total / 3600;
	minutes = (total - (hours * 3600)) / 60;
	seconds = total - hours*3600 - minutes*60;

	cout << "결과 : " << hours << "시간 " << minutes << "분 " << seconds << "초" << endl;

	return 0;
}