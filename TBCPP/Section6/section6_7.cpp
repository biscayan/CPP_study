#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	int x = 5;
	double y = 1.0;

	// pointer�� ���� �ּҿ� ���� �� �����Ͱ� �ִٴ� ���� ���������� ����Ű����
	// de-reference�� �� �ּҿ� ��¥ ������ �ִ��� �鿩�ٺ��ڴٸ� ���������� �����ϴ� ���� ����

	// de-reference operator(*)
	//x�� �޸��ּҿ� �ִ� ���� ���
	cout << *&x << endl; //5

	//pointer�� �޸� �ּҸ� �����ϴ� �����̴�
	int *ptr_x = &x;

	//�������� ������ Ÿ�԰� �����ؾ���
	double *ptr_y = &y;
	
	cout << (int)ptr_x << endl; //3799428
	cout << ptr_y << endl; //0039F974

	//de-referencing
	cout << *ptr_x << endl; //5
	cout << *ptr_y << endl; //1
	
	cout << typeid(ptr_x).name() << endl; //int *

	cout << sizeof(x) << endl; //4
	cout << sizeof(y) << endl; //8

	cout << sizeof(&x) << endl; //4
	cout << sizeof(ptr_x) << endl; //4

	//double��ü�� 8����Ʈ������ �ּҴ� 4����Ʈ��
	cout << sizeof(&y) << endl; //4
	cout << sizeof(ptr_y) << endl; //4

	
	return 0;
}
