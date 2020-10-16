#include <iostream>

int main()
{
	using namespace std;

	bool b1 = true;
	bool b2 = false;

	//logical not
	cout << !b1 << endl;

	//logical and
	//b1�� b2�� true�϶��� ���� true
	cout << (b1 && b2) << endl;

	bool hit = true;
	int health = 10;

	if (hit == true && health < 20)
		cout << "dangerous" << endl;
	else
		cout << "safe" << endl;
		health -= 20;

	//logical or
	//b1�� b2 �� �� �ϳ��� true���� true
	cout << (b1 || b2) << endl;

	//short circuit evaluation
	int x = 2;
	int y = 2;

	//&&�� ������ ���� �Ǻ��� �� ������ �� ���� false�� �������� �Ǻ����� ����
	if (x == 1 && y++ == 2)
	{
		//do domething
	}
	cout << y << endl;//���� 2�̴�. y++�� ����� �ȵ�

	//De Morgan's law
	// !(b1&&b2) -> !b1 || !b2

	//XOR : �ΰ��� �ٸ� �� true
	//false false -> false
	//false true -> true
	//true false -> true
	//true true -> false


	//&&�� ||���� �켱������ ����
	bool v1 = true;
	bool v2 = false;
	bool v3 = false;

	bool r1 = v1 || v2 && v3; // v1 || (v2 && v3) �� ����
	bool r2 = (v1 || v2) && v3;

	cout << r1 << endl; //1
	cout << r2 << endl; //0

	return 0;

}