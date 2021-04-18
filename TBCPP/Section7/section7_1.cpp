#include <iostream>

using namespace std;

// parameter (매개변수)
int num_plus(int a, int b)
{
	return a + b;
}

int main()
{
	int x, y;

	x = 3;
	y = 1;

	// argument (인자)
	num_plus(x, y+1);
}
