#include <iostream>

using namespace std;

//������ ���� �� �����Ƿ� golbal variable�� �ּ������� ����ϴ� ���� ����.
//global variable
int value = 123;

void dosomething()
{
	//static variable
	//static variable�� �ʱ�ȭ�� �ѹ��� ������. ��, a=1�� �ݺ����� ����.
	static int a = 1; //����a�� os�κ��� ���� �޸𸮰� static��

	//�̸� ������ �� ����a�� ������
	++a;

	cout << a << endl;
}

//forward declaration
extern void print_hello(); //��򰡿� print_hello()�� ��ü�� ������
//void print_hello();

//external linkage : �� cpp���Ͽ��� ����� ������ �ٸ� cpp���Ͽ����� ���
extern int ex_variable;
//int ex_variable;

int main()
{

	cout << value << endl; //123

	//local variable
	int value = 1;

	cout << value << endl;  //1

	//global scope operator
	cout << ::value << endl; //123

	dosomething(); //2
	dosomething(); //3
	dosomething(); //4

	//internal linkage : ���� cpp���� �ȿ����� �������� �۵��ϴ� ����
	//static�� ��������μ� �ٸ� cpp���Ͽ����� ���� �Ұ���
	static int g_a = 100;

	//external linkage : �� cpp���Ͽ��� ����� ������ �ٸ� cpp���Ͽ����� ���
	cout << ex_variable << endl;

	return 0;
}