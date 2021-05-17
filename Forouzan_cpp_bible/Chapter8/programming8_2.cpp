#include<iostream>

using namespace std;

int main()
{
	const int CAPACITY = 10;
	int arr[CAPACITY];

	for (int i = 0; i < CAPACITY; i++)
	{
		arr[i] = rand() % CAPACITY + 1;
	}

	int maxNum = 1;
	int minNum = 10;

	for (int i = 0; i < CAPACITY; i++)
	{
		if (arr[i] > maxNum)
		{
			maxNum = arr[i];
		}
		if (arr[i] < minNum)
		{
			minNum = arr[i];
		}
	}
	
	cout << "ÃÖ¼Ú°ª : " << minNum << endl;
	cout << "ÃÖ´ñ°ª : " << maxNum << endl;

	return 0;
}