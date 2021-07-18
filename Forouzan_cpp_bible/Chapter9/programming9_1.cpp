#include <iostream>

using namespace std;

int& maxInt(int& num1, int& num2, int& num3)
{
	if (num1 > num2 && num1 > num3)
	{
		return num1;
	}
	else if (num2 > num1 && num2 > num3)
	{
		return num2;
	}
	else if (num3 > num1 && num3 > num2)
	{
		return num3;
	}
}

int main()
{
	int x = 1;
	int y = 2;
	int z = 3;

	cout << maxInt(x, y, z) << endl;

	return 0;
}