#include <iostream>

using namespace std;

int main()
{
	char grade;

	cout << "������ �Է��ϼ��� (A,B,C,D,F) : ";
	cin >> grade;

	switch (grade)
	{

	// A, B, C -> PASS
	case 'A':
	case 'B':
	case 'C':
		cout << "PASS�Դϴ�." << endl;
		break;

	// D, F -> FAIL
	case 'D':
	case 'F':
		cout << "FAIL�Դϴ�." << endl;
		break;

	default:
		cout << "��ȿ���� ���� �����Դϴ�. �ٽ� �Է��ϼ���" << endl;
	}

	return 0;
}