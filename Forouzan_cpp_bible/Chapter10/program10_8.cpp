#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	char str[] = "Hello, my name is HJ.";
	char* pPtr = strpbrk(str, "meop");
	cout << "ã�� ���� : " << *pPtr << endl; //e
	cout << "ã�� ������ �ε��� : " << pPtr - str; //1

	return 0;
}