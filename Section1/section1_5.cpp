#include <iostream>

using namespace std;

//return���� ������ ������ ���ƾ���
int add_num(int num_a, int num_b)
{
	int sum = num_a + num_b;

	return sum;

}

int mul_num(int num_a, int num_b)
{
	int mul = num_a * num_b;

	return mul;
}

//return�� ���� ����
void print_hello()
{
	cout << "Hello" << endl;

	return;

	//return ���Ĵ� ���ð� ��
	cout << "Hello2" << endl;

}

int main()
{
	cout << add_num(1, 2) << endl;
	cout << add_num(3, 4) << '\n';
	cout << mul_num(2, 4) << endl;
	print_hello();

	return 0;
}