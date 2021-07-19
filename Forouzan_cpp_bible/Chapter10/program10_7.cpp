#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	char str[] = "Hi, my name is HJ";
	char* sPtr = strstr(str, "HJ");
	cout << "서브 문자열의 시작 인덱스 : " << sPtr - str;

	return 0;
}