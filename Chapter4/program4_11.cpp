#include <iostream>

using namespace std;

int main()
{

	int day_num;

	cout << "0~6 ������ ���ڸ� �Է��ϼ���. [0(��), 1(��), 2(ȭ), 3(��), 4(��), 5(��), 6(��)]" << endl;
	cout << "---> ";
	cin >> day_num;

	switch (day_num)
	{
	case 0: 
		cout << "�Ͽ���" << endl;
		break;

	case 1:
		cout << "������" << endl;
		break;

	case 2:
		cout << "ȭ����" << endl;
		break;

	case 3:
		cout << "������" << endl;
		break;

	case 4:
		cout << "�����" << endl;
		break;

	case 5:
		cout << "�ݿ���" << endl;
		break;

	case 6:
		cout << "�����" << endl;
		break;

	default:
		cout << "��ȿ���� ���� �����Դϴ�. �ٽ� �Է��ϼ���." << endl;
	}

	return 0;
}