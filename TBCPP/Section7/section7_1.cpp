#include <iostream>

using namespace std;

// parameter (�Ű�����)
int num_plus(int a, int b)
{
	return a + b;
}

int main()
{
	int x, y;

	x = 3;
	y = 1;

	// argument (����)
	num_plus(x, y+1);
}
