#include <iostream>
#include "My_constants.h"
using namespace std;

void print_num(const int num)
{
	cout << num << endl;
}


int main()
{
	print_num(123);

	//compile time constant
	const double gravity = 9.8; //���� �ٲ� �� ����

	//run time constant
	int number;
	cin >> number;
	const int special_number(number);

	//constexpr -> compile time�� constant�� �����ȴٴ� ���� ��Ȯ�ϰ� ��
	constexpr int const_num(1234);

	//constant�� header���Ͽ��� �ҷ���
	double radius;
	cin >> radius;
	double circumference = 2.0 * radius * constants::pi;

	return 0;
}