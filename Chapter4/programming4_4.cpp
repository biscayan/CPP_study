#include <iostream>

using namespace std;

int main()
{
	char type;
	unsigned int time;
	unsigned int charge;

	cout << "������ ������ �Է��ϼ��� (c/b/t) : ";
	cin >> type;

	cout << "���� �ð��� �Է��ϼ��� : ";
	cin >> time;

	switch (type)
	{
	case 'c':
	{
		charge = time * 2;
		cout << "����� " << charge << "�޷��Դϴ�." << endl;
		break;
	}
	case 'b':
	{
		charge = time * 3;
		cout << "����� " << charge << "�޷��Դϴ�." << endl;
		break;
	}
	case 't':
	{
		charge = time * 4;
		cout << "����� " << charge << "�޷��Դϴ�." << endl;
		break;
	}
	default:
		cout << "������ Ÿ���� �ٽ� �Է��ϼ���." << endl;
	}

	return 0;
}