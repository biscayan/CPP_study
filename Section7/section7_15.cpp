#include <iostream>

using namespace std;

// terminal â���� ���α׷� ����
int main(int argc, char* argv[])
{
	for (int count = 0; count < argc; count++)
	{
		cout << argv[count];
	}

	return 0;
}