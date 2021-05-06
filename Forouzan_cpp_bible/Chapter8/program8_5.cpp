#include <iostream>

using namespace std;

void print(const int arr[], int size)
{
	double average;
	int num_sum = 0;

	int smallest = 1000000;
	int largest = -1000000;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < smallest)
		{
			smallest = arr[i];
		}

		if (arr[i] > largest)
		{
			largest = arr[i];
		}

		num_sum += arr[i];
	}

	average = static_cast<double>(num_sum) / size;

	cout << "합계 : " << num_sum << endl;
	cout << "최소값 : " << smallest << endl;
	cout << "최대값 : " << largest << endl;
	cout << "합계 : " << average << endl;
}

int main()
{
	const int CAPACITY = 10;

	int arr[CAPACITY] = { 1,5,-10,12,34,-54,67,0,27,-3 };
		
	print(arr, CAPACITY);

	return 0;
}