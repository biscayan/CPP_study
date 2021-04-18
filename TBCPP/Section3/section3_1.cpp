#include <iostream>
#include <cmath>

//연산자에 대한 설명
//https://ko.wikipedia.org/wiki/C%EC%99%80_C%2B%2B%EC%9D%98_%EC%97%B0%EC%82%B0%EC%9E%90

using namespace std;

int main()
{
	int x = 3 * 4 / 2; // *와 /는 우선순위가 같음 (level5)
	int y = pow(2, 3); //2의 3제곱, ^은 제곱의 연산자가 아님 XOR연산자이다.

	cout << x << endl;
	cout << y << endl;

	return 0;
}