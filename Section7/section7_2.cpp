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

	// x��� ������ ���޵Ǵ� ���� �ƴ϶� x�� ���� ���޵�
	dosomething(x); // 3 007EFC80
	dosomething(x + 1); // 4 007EFC80

	return 0;
}
