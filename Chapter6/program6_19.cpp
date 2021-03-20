#include <iostream>

using namespace std;

int max(int num1, int num2);
int max(int num1, int num2, int num3); 
int max(int num1, int num2, int num3, int num4);

int main()
{
	cout << "Maximum(3,5) = " << max(3, 5) << endl;
	cout << "Maximum(21,8,13) = " << max(21, 8, 13) << endl;
	cout << "Maximum(11,9,20,4) = " << max(11, 9, 20, 4) << endl;

	return 0;
}

int max(int num1, int num2)
{	
	int larger;

	if (num1 >= num2)
	{
		larger = num1;
	}
	else
	{
		larger = num2;
	}

	return larger;
}

int max(int num1, int num2, int num3)
{
	return max(max(num1, num2), num3);
}

int max(int num1, int num2, int num3, int num4)
{
	return max(max(max(num1, num2), num3),num4);
}