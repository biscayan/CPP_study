#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	char str[] = "Hi, my name is HJ";
	char* sPtr = strstr(str, "HJ");
	cout << "���� ���ڿ��� ���� �ε��� : " << sPtr - str;

	return 0;
}