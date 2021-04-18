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
	const double gravity = 9.8; //값을 바꿀 수 없음

	//run time constant
	int number;
	cin >> number;
	const int special_number(number);

	//constexpr -> compile time에 constant가 결정된다는 것을 명확하게 함
	constexpr int const_num(1234);

	//constant를 header파일에서 불러옴
	double radius;
	cin >> radius;
	double circumference = 2.0 * radius * constants::pi;

	return 0;
}