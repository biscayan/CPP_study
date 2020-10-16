#include <iostream>

int main()
{
	using namespace std;

	bool b1 = true;
	bool b2 = false;

	//logical not
	cout << !b1 << endl;

	//logical and
	//b1과 b2가 true일때만 값이 true
	cout << (b1 && b2) << endl;

	bool hit = true;
	int health = 10;

	if (hit == true && health < 20)
		cout << "dangerous" << endl;
	else
		cout << "safe" << endl;
		health -= 20;

	//logical or
	//b1과 b2 둘 중 하나만 true여도 true
	cout << (b1 || b2) << endl;

	//short circuit evaluation
	int x = 2;
	int y = 2;

	//&&는 왼쪽을 먼저 판별해 본 다음에 그 값이 false면 오른쪽을 판별하지 않음
	if (x == 1 && y++ == 2)
	{
		//do domething
	}
	cout << y << endl;//값은 2이다. y++가 계산이 안됨

	//De Morgan's law
	// !(b1&&b2) -> !b1 || !b2

	//XOR : 두개가 다를 때 true
	//false false -> false
	//false true -> true
	//true false -> true
	//true true -> false


	//&&이 ||보다 우선순위가 높음
	bool v1 = true;
	bool v2 = false;
	bool v3 = false;

	bool r1 = v1 || v2 && v3; // v1 || (v2 && v3) 와 같음
	bool r2 = (v1 || v2) && v3;

	cout << r1 << endl; //1
	cout << r2 << endl; //0

	return 0;

}