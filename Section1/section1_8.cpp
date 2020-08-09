#include <iostream>

using namespace std;

int main()
{

	//x is a variable, 2 is a literal
	int x = 2;

	//+ is a operator, x and 2 are operands
	cout << x + 2 << endl;

	//unary
	cout << -x << endl;

	//binary
	cout << 1 + 2 << endl;
	
	//ternary
	//조건(x>0)이 참이면 :왼쪽을 실행, 거짓이면 :오른쪽을 실행
	int y = (x > 0) ? 1 : 0;
	cout << y << endl;

	return 0;

}