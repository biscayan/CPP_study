#include <iostream>

using namespace std;

int main()
{
	int arr[5] = { 1,3,5,7,9 };

	//����array�� pointer�� ����

	//���� array�� ù�� ° ����� �ּҸ� ���� 
	cout << arr << endl; //001DFD7C
	cout << &arr[0] << endl; //001DFD7C

	//de-referencing
	cout << *arr << endl; //1

	int* ptr = arr;
	cout << ptr << endl; //001DFD7C
	cout << *ptr << endl; //1

	cout << sizeof(arr) << endl; //20
	cout << sizeof(ptr) << endl; //4 //������ ���� ��ü�� ������� 4����Ʈ��

	//������ ���� (pointer arithmetic)
	cout << *ptr << " " << *(ptr + 1) << " " << *(ptr +2) << endl; // 1 3 5

	char name[] = "HyeongJu";
	cout << *name << endl; //H


	return 0;
}


