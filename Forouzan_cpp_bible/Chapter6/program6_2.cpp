#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a, b, c;
	double term;

	cout << "2차항의 계수를 입력하세요 : ";
	cin >> a;

	cout << "1차항의 계수를 입력하세요 : ";
	cin >> b;

	cout << "상수를 입력하세요 : ";
	cin >> c;

	// 판별식
	term = pow(b, 2) - (4 * a * c);

	if (term < 0)
	{
		cout << "근이 존재하지 않습니다." << endl;
	}
	else if (term == 0)
	{
		double x = -b / (2 * a);

		cout << "중근이 존재합니다." << endl;
		cout << "근 : " << x << endl;
	}
	else if (term > 0)
	{
		double x1 = (-b + sqrt(term)) / (2 * a);
		double x2 = (-b - sqrt(term)) / (2 * a);

		cout << "두 개의 근이 존재합니다." << endl;
		cout << "근 : " << x1 << ", " << x2;
	}

	return 0;
}