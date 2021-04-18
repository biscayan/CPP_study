#include <iostream>
#include <random>

using namespace std;

int make_rand()
{
	int rand_sum = 0;

	for (int i = 0; i < 10; i++)
	{
		// 10 ~ 99
		int rand_num = rand() % (99 + 1 - 10) + 10;
		rand_sum += rand_num;
	}
	
	rand_sum /= 10;

	return rand_sum;
}

int main()
{	
	for (int i = 0; i < 5; i++)
	{
		cout << make_rand() << endl;
	}
	
	return 0;
}