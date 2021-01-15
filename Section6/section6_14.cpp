#include <iostream>

using namespace std;


struct Something
{
	int v1;
	float f1;
};

struct Other
{
	Something st;
};

int main()
{
	int value = 5;

	int& ref = value;

	int* ptr = &value;

	cout << ref << endl; //5

	ref = 10;

	// ref���� �ٲٸ鼭 value���� ���� �ٲ�
	cout << value << " " << ref << endl; //10 10

	//ref �� value�� ���� �ּҸ� ������ ptr�� ������ �ּҸ� ������ ����
	cout << &value << endl; //00AFFD40
	cout << &ref << endl; //00AFFD40
	cout << ptr << endl; //00AFFD40
	cout << &ptr << endl; //00AFFD28

	/*
	reference�� ���������� �ʱ�ȭ���־�� �ϰ� const�� ��� �Ұ���
	const int value = 3; 
	int& ref = value; �Ұ���
	const int& ref = value; reference�� const�� ���� ����
	int& ref = 3; �Ұ���
	*/
	
	//reference�� ���� ������ ���� �����ϰ� ǥ��
	Other ot;
	int& v1 = ot.st.v1;
	v1 = 3;

	return 0;
}