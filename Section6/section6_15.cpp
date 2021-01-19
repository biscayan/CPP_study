#include <iostream>

using namespace std;

void dosomething(const int& x)
{
	cout << x << endl;
}

int main()
{
	/*
	//-----Case1 가능-----
	int x = 5;
	const int& ref_x = x;

	//-----Case2 가능-----
	const int x = 5;
	const int& ref_x = x;

	//-----Case3 불가능-----

	const int x = 5;
	int& ref_x = x;

	//-----Case4 가능-----
	int x = 5;
	int& ref_x = x;
	const int& ref_x2 = ref_x;

	//-----Case5 가능-----
	const int& ref_x = 3+4;
	*/

	//reference를 함수의 인자로 사용하면 매우 편리함
	int a = 1;
	dosomething(a); //1
	dosomething(3); //3
	dosomething(a + 2); //3
	dosomething(3 * 4); //12

	return 0;
}