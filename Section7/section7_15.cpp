#include <iostream>

using namespace std;

// terminal 창에서 프로그램 실행
int main(int argc, char* argv[])
{
	for (int count = 0; count < argc; count++)
	{
		cout << argv[count];
	}

	return 0;
}