#include <iostream>

using namespace std;

int main()
{
	int price = 1000;
	int count;
	double total;

	cout << "���� ������ �Է��ϼ��� : ";
	cin >> count;

	if (count >= 100)
	{
		total = (price * count) - (price * count * 0.1);
	}
	else if (count >= 50)
	{
		total = (price * count) - (price * count * 0.05);
	}
	else if (count >= 10)
	{
		total = (price * count) - (price * count * 0.03);
	}
	else 
	{
		total = (price * count);
	}

	cout << "����ؾ� �� �ݾ��� " << total << "���Դϴ�." << endl;

	return 0;
}