#include <iostream>

using namespace std;

int main()
{
	int grade;
	int registration = 10;
	int total_fee;

	cout << "수강 학점을 입력하세요 : ";
	cin >> grade;

	if (grade >= 12)
	{
		total_fee = registration + 12 * 10;
	}
	else
	{
		total_fee = registration + grade * 10;
	}

	cout << "총 수업료는 " << total_fee << "달러입니다." << endl;

	return 0;
}