#include <iostream>

using namespace std;

// void pointer = generic pointer

int main()
{
	int i = 5;
	float f = 3.0f;
	char c = 'c';

	void  *ptr = nullptr;

	// pointer�� ��� ������ ���������� � ���� �� �ִ��� Ȯ���� ��ƴ�.
	ptr = &i;
	ptr = &f;
	ptr = &c;

	// �� ����Ʈ�� ���ؾ� �ϴ��� �� �� �����Ƿ� ���� �Ұ���
	//cout << ptr + 1 << endl;
	
	// de-referencing�� �Ұ���, ���� ������ ���� ������ casting�ؾ���
	//cout << *ptr << endl;
	cout << *static_cast<char*>(ptr) << endl; //c

	return 0;
}