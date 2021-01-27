#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// declare variables
	int counter;
	double number;
	long double sum, product;

	// initialize variables
	sum = 0;
	product = 1;

	do
	{
		cout << "연산을 할 횟수를 정하세요 : ";
		cin >> counter;
	} while (counter <= 0);

	// calculation
	for (int i = 1; i <= counter; i++)
	{
		cout << "연산을 할 숫자를 입력하세요 : ";
		cin >> number;

		sum += number;
		product *= number;
	}

	cout << fixed << setprecision(2);
	cout << "숫자들의 합 : " << sum << endl;
	cout << "숫자들의 곱 : " << product << endl;
		
	return 0;
}