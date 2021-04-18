#include <iostream>

using namespace std;

// �Ű������� �ٸ����� �����ϴ� ����� ����� �� �����ε��� ����� �� ����
// return type�� �ٸ� �����δ� �����ε��� �� �� ����, �Ű������ �޶����
int add(int a, int b)
{
	return a + b;
}

double add(double a, double b)
{
	return a + b;
}

void print(unsigned int value) 
{
	cout << value << endl;
}

void print(float value)
{
	cout << value << endl;
}


int main()
{
	cout << add(1, 2) << endl;
	cout << add(3.1, 4.2) << endl;

	/*
	unsigned int�� ����, float���� ���� ambiguous��
	print('a');
	print(0);
	print(3.141592);
	*/
	
	// data type�� ��Ȯ������������ �ذ� ����
	print((unsigned int)'a');
	print(0u);
	print(3.141592f);

	return 0;
}