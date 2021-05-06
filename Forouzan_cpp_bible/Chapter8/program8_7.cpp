#include <iostream>

using namespace std;

void mulByTwo(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] *= 2;
	}
}


void print(const int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


int main()
{
	int numbers[5] = { 13,53,66,43,20 };
	
	//Before multiplying
	print(numbers, 5);

	mulByTwo(numbers, 5);

	//After Multiplying
	print(numbers, 5);

	return 0;
}