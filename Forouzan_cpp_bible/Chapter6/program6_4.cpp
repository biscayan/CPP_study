#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const double PI = 3.141592653589793238462;
	int n;
	double s;
	double peri, area;

	do
	{
		cout << "변의 개수를 입력하세요 (4 이상의 정수) : ";
		cin >> n;
	} while (n < 4);

	do
	{
		cout << "변의 길이를 입력하세요 : ";
		cin >> s;
	} while (s < 0.0);

	// 둘레 공식
	peri = n * s;

	// 넓이 공식
	area = (n * pow(s, 2)) / (n * tan(PI / n));

	cout << n << "각형의 둘레 : " << peri << endl;
	cout << n << "각형의 넓이 : " << area << endl;

	return 0;

}