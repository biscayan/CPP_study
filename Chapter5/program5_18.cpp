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
		cout << "������ �� Ƚ���� ���ϼ��� : ";
		cin >> counter;
	} while (counter <= 0);

	// calculation
	for (int i = 1; i <= counter; i++)
	{
		cout << "������ �� ���ڸ� �Է��ϼ��� : ";
		cin >> number;

		sum += number;
		product *= number;
	}

	cout << fixed << setprecision(2);
	cout << "���ڵ��� �� : " << sum << endl;
	cout << "���ڵ��� �� : " << product << endl;
		
	return 0;
}