#include <iostream>

using namespace std;

int main()
{
	int x, y;

	cout << "x��ǥ�� �Է��ϼ��� : ";
	cin >> x;

	cout << "y��ǥ�� �Է��ϼ��� : ";
	cin >> y;

	if (x > 0 && y > 0)
	{
		cout << "���� 1��и鿡 �ֽ��ϴ�." << endl;
	}
	if (x < 0 && y > 0)
	{
		cout << "���� 2��и鿡 �ֽ��ϴ�." << endl;
	}
	if (x < 0 && y < 0)
	{
		cout << "���� 3��и鿡 �ֽ��ϴ�." << endl;
	}
	if (x > 0 && y < 0)
	{
		cout << "���� 4��и鿡 �ֽ��ϴ�." << endl;
	}

	return 0;
}