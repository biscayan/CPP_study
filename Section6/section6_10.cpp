#include <iostream>

using namespace std;

int main()
{
	//�տ� const�� �پ�߸� ��ȣ�� ���ó�� ���
	const char* NAME1 = "jack jack";
	const char* NAME2 = "jack jack";

	//������� �ٸ����� ���� �����Ƿ� ���� �ּҸ� �Ҵ���
	cout << (uintptr_t)NAME1 << endl; //9468720
	cout << (uintptr_t)NAME2 << endl; //9468720

	int int_arr[] = { 1,3,5,7,9 };
	char char_arr[] = "Hello, world!";
	const char* NAME = "jack jack";

	//cout���� ������ �����ʹ� ���ڿ��� �ƴұ� ������ �ϰ� Ư���� ó���� ��
	//���� �ּҸ� ����ϴ� ���� �ƴ϶� �� ���� �����
	cout << int_arr << endl; //010FF834
	cout << char_arr << endl; //Hello, world!
	cout << NAME << endl; //jack jack

	return 0;
}