#include <iostream>

using namespace std;

int main()
{
	int sum = 0;

	// ��Ƽ��
	int num;

	cout << "������ �Է��ϼ��� (-1 �Է½� ���α׷� ����) : ";
	cin >> num;

	while (num != -1)
	{
		sum += num;

		cout << "������ �Է��ϼ��� (-1 �Է½� ���α׷� ����) : ";
		cin >> num;
	}

	cout << "������ �� : " << sum << endl;

	return 0;
}