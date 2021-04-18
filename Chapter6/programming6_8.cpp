#include <iostream>
#include <random>

using namespace std;

void random_even()
{	
	int count = 0;

	while (count < 10)
	{
		int num = rand() % 10 + 1;

		if (num % 2 == 0)
		{
			cout << num << " ";
			count += 1;
		}
	}
	cout << endl;
}

int main()
{
	random_even();

	return 0;
}