#include <iostream>

int main()
{
	using namespace std;

	int x = 6;
	int x1 = 1 - -x; // 1 - (-x) -> 1 + x
	int y = 4;

	cout << x % y << endl; //������ ������

	cout << x / y << endl; //x�� y�� ��� int�̹Ƿ� �������� ����� int�� ����
	
	//x�� y�߿� �ϳ��� float�̾ �������� ����� float�� ��
	cout << float(x) / y << endl;
	cout << x / float(y) << endl;
	cout << float(x) / float(y) << endl;

	cout << -5 / 2 << endl; //���� -2.5�̾�� ������ �Ҽ��κ��� ������ �ǹǷ� -2�� ��
	cout << -5 / float(2) << endl; //-2.5

	cout << -5 % 2 << endl; //������ ������ ���ʿ� �ִ� ������ ��ȣ�� ���� 

	int z = x;
	z += y; //z = z + y

	cout << z << endl;

	return 0;
}