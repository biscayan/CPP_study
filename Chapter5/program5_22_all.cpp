#include <iostream>

using namespace std;

int main()
{
	int size, num, divider;
	bool success = true;

	do
	{
		cout << "����Ʈ�� ����� �Է��ϼ��� : ";
		cin >> size;
	} while (size <= 0);

	do
	{
		cout << "� ���ڷ� ������ ���ϼ��� : ";
		cin >> divider;
	} while (divider <= 0);

	for (int i = 0; (i < size) && (success); i++)
	{
		cout << "����Ʈ�� ���� ���ڸ� �Է��ϼ��� : ";
		cin >> num;

		success = (num % divider == 0);
	}

	if (success)
	{
		cout << "�����ڴ� " << divider << "�� ���� �� �ֽ��ϴ�." << endl;
	}
	else
	{
		cout << num << "�� " << divider << "�� ���� �� �����ϴ�." << endl;
	}

	return 0;
}