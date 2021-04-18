#include <iostream>

using namespace std;

int GCD(int a, int b)
{
	int r;

	while (b != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}

	return a;
}


int main()
{
	int m, n;

	cout << "두 개의 정수를 입력하세요 : ";
	cin >> m >> n;

	int gcd = GCD(m, n);

	cout << m << "과(와) "<< n << "의 최대공약수는 "<< gcd << "입니다." << endl;

	return 0;
}