#include <iostream>

using namespace std;

int main()
{
	int sale = 128;
	double tax = 0.09;
	double total = sale - sale * tax;

	cout << "�Ǹ� �ݾ� : " << sale << " ����" << endl;
	cout << "�Һ� : " << tax * 100 << " %" << endl;
	cout << "��ü �ݾ� : " << total << " ����" << endl;

	return 0;
}