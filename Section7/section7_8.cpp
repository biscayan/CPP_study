#include <iostream>

using namespace std;

// �Լ��� ������ �� �⺻���� �־���ٸ� ���� �ÿ��� �⺻���� ������ �ȵ�
// �ݴ��, �Լ��� ������ �� �⺻���� �־���ٸ� ���� �ÿ��� �⺻���� ������ �ȵ�
// ������ �Լ��� ������ �� �⺻���� �־���
int add_nums(int a = 10, int b = 20, int c = 30);

int add_nums(int a, int b , int c)
{
	int result = a + b + c;

	return result;
}

int main()
{
	cout << add_nums() << endl; // 10 + 20 + 30 = 60
	cout << add_nums(100) << endl; // 100 + 20 + 30 = 150
	cout << add_nums(100,200) << endl; // 100 + 200 + 30 = 330
	cout << add_nums(100,200,300) << endl; // 100 + 200 + 300 = 600

	return 0;
}