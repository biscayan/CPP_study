#include <iostream>

//�Լ��� parameter�� auto�� �Ұ���
auto add_num(int x, int y)
{
	return x + y;
}

//trailing
//auto add_num(int x, int y) -> int;

int main()
{
	using namespace std;
	
	//a�� int��� ������ redundant��
	//int a = 123;

	//�ʱ�ȭ�� ���� ������ auto�� ����� �� ����
	auto a = 123; //�ڵ����� a�� int�� ����
	auto b = 1.0 + 2.0;
	
	//�Լ��� return���� auto�� ����
	auto result = add_num(1, 2);

	return 0;
}