#include <iostream>

int main()
{
	using namespace std;

	//literal constant
	float pi = 3.14f;
	//symbolic constant
	const float pi2 = 3.14f; //변수 값을 바꿀 수 없음

	//Decimal (10진수) : 0 1 2 3 4 5 6 7 8 9 10 ...
	//Octal (8진수)    : 0 1 2 3 4 5 6 7 10 11 12 ...
	//Hexa (16진수)    : 0 1 2 3 4 5 6 7 8 9 A B C D E F 10 11 ..

	int x = 012; //앞에 0을 붙이면 8진수
	int x1 = 0xF; //앞에 0x를 붙이면 16진수
	cout << x << endl;
	cout << x1 << endl;

	//binary literal
	int x2 = 0b1010; //2의 1승(2) + 2의 3승(8) = 10
	cout << x2 << endl;

	return 0;
}