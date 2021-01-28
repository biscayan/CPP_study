#include <iostream>

using namespace std;

void dosomething(int a)
{
	cout << "In function " << a << " " << &a << endl;
}

int main()
{

	dosomething(5); // 5 007EFC80

	int x = 3;

	cout << "In main " << x << " " << &x << endl; // 3 007EFD54

	// x라는 변수가 전달되는 것이 아니라 x의 값이 전달됨
	dosomething(x); // 3 007EFC80
	dosomething(x + 1); // 4 007EFC80

	return 0;
}
