#include <iostream>

int main()
{
	using namespace std;

	//++�� 1�� ���ϴ� ������, --�� 1�� ���� ������

	//�߿�!! ++ �Ǵ� --�� �ٴ� ��ġ�� ����ؾ���
	int x1 = 6, y1 = 6;
	cout << x1 << " " << y1 << endl; //6,6
	cout << ++x1 << " " << --y1 << endl; //x1, y1�� �����ϰ� �� ���� stream���� ���� //7,5
	cout << x1 << " " << y1 << endl; //7,5

	int x2 = 6, y2 = 6;
	cout << x2 << " " << y2 << endl; //6,6
	cout << x2++ << " " << y2-- << endl; //x2, y2�� stream���� ������ �� ���Ŀ� ������ ���� //6,6
	cout << x2 << " " << y2 << endl; //7,5

	return 0;
}