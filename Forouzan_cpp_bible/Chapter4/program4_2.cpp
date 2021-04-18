#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	double hours;
	double rate = 10000;
	double regularpay;
	double overpay;
	double totalpay;

	cout << "업무 시간을 입력하세요 : ";
	cin >> hours;

	regularpay = hours * rate;

	if (hours > 40)
	{
		overpay = (hours - 40) * rate * 0.3;
	}
	else
	{
		overpay = 0.0;
	}

	totalpay = regularpay + overpay;

	cout << fixed << showpoint;
	cout << "일반 급여 : " << setprecision(2) << regularpay << endl;
	cout << "초과 근무에 대한 급여 : " << setprecision(2) << overpay << endl;
	cout << "전체 급여 : " << setprecision(2) << totalpay << endl;

	return 0;
}