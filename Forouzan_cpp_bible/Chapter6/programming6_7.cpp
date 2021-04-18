#include <iostream>
#include <random>

using namespace std;

void random_ten()
{
	for (int i = 0; i < 10; i++)
	{
		int num = rand() % 10 + 1;

		cout << num << " ";
	}
	cout << endl;
}

int main()
{
	random_ten();

	return 0;
}