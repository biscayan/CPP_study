#include <iostream>

using namespace std;

int main()
{
	// ----------CASE 1----------
	const int VALUE1 = 5;
	const int* PTR1 = &VALUE1;

	//value�� ���ȭ�Ǿ��� ������ �������� ���� �ٲ� ���� ����
	//*PTR = 3;

	cout << *PTR1 << endl; //5
	
	// ----------CASE 2----------
	// �����͸� ���ȭ�� ���� ����
	int value2 = 5;
	const int* ptr2 = &value2;

	//value���� �ٲٴ� �͵� ����
	value2 = 6;
	cout << *ptr2 << endl; //6

	//�������� value���� �ٲٴ� ���� ����
	ptr2 = &VALUE1;
	cout << *ptr2 << endl; //5

	// ----------CASE 3----------
	int value3 = 5;
	int *const ptr3 = &value3;

	//�����Ͱ� ���ȭ�Ǿ� value���� �ٲܼ�����
	//ptr3 = &value2;

	return 0;
}