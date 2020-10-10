#include <iostream>

int main()
{
	using namespace std;

	int x = 6;
	int x1 = 1 - -x; // 1 - (-x) -> 1 + x
	int y = 4;

	cout << x % y << endl; //나머지 연산자

	cout << x / y << endl; //x와 y가 모두 int이므로 나누기의 결과도 int가 나옴
	
	//x와 y중에 하나만 float이어도 나누기의 결과는 float이 됨
	cout << float(x) / y << endl;
	cout << x / float(y) << endl;
	cout << float(x) / float(y) << endl;

	cout << -5 / 2 << endl; //답이 -2.5이어야 하지만 소수부분은 절삭이 되므로 -2가 됨
	cout << -5 / float(2) << endl; //-2.5

	cout << -5 % 2 << endl; //나머지 연산은 왼쪽에 있는 숫자의 부호를 따름 

	int z = x;
	z += y; //z = z + y

	cout << z << endl;

	return 0;
}