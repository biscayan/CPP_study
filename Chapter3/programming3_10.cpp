#include <iostream>

using namespace std;

int main()
{
	int num1, num2, num3, num4;
	double divider = 4.0;

	cout << "4개의 숫자를 입력하세요 : ";
	cin >> num1 >> num2 >> num3 >> num4;

	double average = (num1 + num2 + num3 + num4) / divider;

	cout << "평균 : " << average << endl;

	return 0;
}