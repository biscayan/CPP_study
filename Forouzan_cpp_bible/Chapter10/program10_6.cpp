#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	char str[] = "Hello world";

	char* cPtr = strchr(str, 'o');
	*cPtr = 'O';
	cout << "첫 번째 변경 후의 str : " << str << endl;

	cPtr = strrchr(str, 'o');
	*cPtr = 'O';
	cout << "두 번째 변경 후의 str : " << str << endl;

	return 0;
}