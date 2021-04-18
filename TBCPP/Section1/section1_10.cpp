#include <iostream>

using namespace std;

//forward declaration
//함수의 최소정보(input,output)을 미리 알려줌
//go to declaration을 이용하면 편함 Ctrl + F12
int add_num(int a, int b);
int mul_num(int a, int b);
int subtract_num(int a, int b);

int main()
{
	cout << add_num(1, 2) << endl; 
	cout << mul_num(1, 2) << endl;
	cout << subtract_num(1, 2) << endl;

	return 0;
}

//definition
int add_num(int a, int b)
{
	return a + b;
}

int mul_num(int a, int b)
{
	return a * b;
}

int subtract_num(int a, int b)
{
	return a - b;
}

