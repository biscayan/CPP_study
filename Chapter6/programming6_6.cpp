#include <iostream>
#include <random>

using namespace std;

int main()
{
	int zero_count = 0;
	int one_count = 0;

	for (int i = 0; i < 1000000; i++)
	{
		int num = rand() & 2;

		if (num == 0)
		{
			zero_count += 1;
		}
		else
		{
			one_count += 1;
		}
	}

	cout << "0�� Ƚ�� : " << zero_count << endl;
	cout << "1�� Ƚ�� : " << one_count << endl;

	return 0;
}