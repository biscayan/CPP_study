#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	char str[] = "Hello world";

	char* cPtr = strchr(str, 'o');
	*cPtr = 'O';
	cout << "ù ��° ���� ���� str : " << str << endl;

	cPtr = strrchr(str, 'o');
	*cPtr = 'O';
	cout << "�� ��° ���� ���� str : " << str << endl;

	return 0;
}