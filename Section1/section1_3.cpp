#include <iostream>

int main()
{
	//x��� �޸𸮸� ���� ������ ����, 123�̶�� ������ ����
	//x->L-value, 123->R-value
	int x = 123; //initialization
	//int x(123);���ε� ��� ����

	x = 5; //assignment

	std::cout << x << std::endl;
	//std::cout << &x << std::endl; //&�� ���� �޸� �ּ� Ȯ��
	return 0;
}