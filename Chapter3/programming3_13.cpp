#include <iostream>

using namespace std;

int main()
{
	int work_time;
	int payment;

	cout << "일한 시간을 입력하세요 : ";
	cin >> work_time;

	cout << "시급을 입력하세요 : ";
	cin >> payment;

	int extra_time = work_time - 40;
	double extra_money = (payment + payment * 0.6) * extra_time;

	cout << "전체 급여 : " << payment * 40 + extra_money << "원" <<endl;

	return 0;
}