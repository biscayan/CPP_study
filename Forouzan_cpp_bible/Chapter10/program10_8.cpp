#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	char str[] = "Hello, my name is HJ.";
	char* pPtr = strpbrk(str, "meop");
	cout << "찾은 문자 : " << *pPtr << endl; //e
	cout << "찾은 문자의 인덱스 : " << pPtr - str; //1

	return 0;
}