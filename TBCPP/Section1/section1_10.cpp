#include <iostream>

using namespace std;

//forward declaration
//�Լ��� �ּ�����(input,output)�� �̸� �˷���
//go to declaration�� �̿��ϸ� ���� Ctrl + F12
int add_num(int a, int b);
int mul_num(int a, int b);
int subtract_num(int a, int b);

int main()
{
	cout << add_num(1, 2) << endl; 
	cout << mul_num(1, 2) << endl;
	cout << subtract_num(1, 2) << endl;

	return 0;
}

//definition
int add_num(int a, int b)
{
	return a + b;
}

int mul_num(int a, int b)
{
	return a * b;
}

int subtract_num(int a, int b)
{
	return a - b;
}

