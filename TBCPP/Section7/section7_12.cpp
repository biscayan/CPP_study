#include <iostream>

using namespace std;

int num_sum(int num)
{
	if (num == 0)
	{
		return 0;
	}
	else if (num == 1)
	{
		return 1;
	}
	else
	{
		return num_sum(num - 1) + num;
	}
}

void print_down(int num)
{
	cout << num << endl;

	if (num > 1)
	{
		print_down(num - 1);
	}
}

int main()
{
	print_down(5); // 5 4 3 2 1
	
	cout << num_sum(10) << endl; // 55

	return 0;
}