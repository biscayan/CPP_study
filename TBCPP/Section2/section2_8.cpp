#include <iostream>

int main()
{
	using namespace std;

	//literal constant
	float pi = 3.14f;
	//symbolic constant
	const float pi2 = 3.14f; //���� ���� �ٲ� �� ����

	//Decimal (10����) : 0 1 2 3 4 5 6 7 8 9 10 ...
	//Octal (8����)    : 0 1 2 3 4 5 6 7 10 11 12 ...
	//Hexa (16����)    : 0 1 2 3 4 5 6 7 8 9 A B C D E F 10 11 ..

	int x = 012; //�տ� 0�� ���̸� 8����
	int x1 = 0xF; //�տ� 0x�� ���̸� 16����
	cout << x << endl;
	cout << x1 << endl;

	//binary literal
	int x2 = 0b1010; //2�� 1��(2) + 2�� 3��(8) = 10
	cout << x2 << endl;

	return 0;
}