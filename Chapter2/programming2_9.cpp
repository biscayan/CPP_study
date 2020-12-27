#include <iostream>

using namespace std;

int main()
{
	int sale = 128;
	double tax = 0.09;
	double total = sale - sale * tax;

	cout << "판매 금액 : " << sale << " 만원" << endl;
	cout << "소비세 : " << tax * 100 << " %" << endl;
	cout << "전체 금액 : " << total << " 만원" << endl;

	return 0;
}