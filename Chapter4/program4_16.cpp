#include <iostream>

using namespace std;

int main()
{
	double income, tax;
	bool range1, range2, range3, range4;
	double limit1 = 10000.00, limit2 = 50000.00, limit3 = 100000.00;
	double rate1 = 0.05, rate2 = 0.10, rate3 = 0.15, rate4 = 0.20;

	cout << "수입을 달러로 입력하세요 : ";
	cin >> income;

	range1 = (income >= 0) && (income <= limit1);
	range2 = (income > limit1) && (income <= limit2);
	range3 = (income > limit2) && (income <= limit3);
	range4 = (income > limit3);

	if (range1)
	{
		tax = income * rate1;
	}
	else if (range2)
	{
		tax = limit1 * rate1 + (income - limit1) * rate2;

	}
	else if (range3)
	{
		tax = limit1 * rate1 + (limit2 - limit1) * rate2 + (income - limit2) * rate3;

	}
	else if (range4)
	{
		tax = limit1 * rate1 + (limit2 - limit1) * rate2 + (limit3 - limit2) * rate3 + (income - limit3) * rate4;
	}
	else
	{
		cout << "입력에 문제가 있습니다. 다시 입력하세요." << endl;
	}

	cout << "수입 : " << income << endl;
	cout << "세금 : " << tax << endl;

	return 0;
}