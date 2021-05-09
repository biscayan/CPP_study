#include <iostream>
#include <string>

using namespace std;

void findGrades(const int scores[], char grades[], int size)
{
	char arr[] = { 'F','F','F','F','F','F','D','C','B','A','A' };

	for (int i = 0; i < size; i++)
	{
		grades[i] = arr[scores[i] / 10];
	}
}

int main()
{
	const int SIZE = 4;

	string names[SIZE] = { "HJ", "MJ", "NE", "KD" };
	int scores[SIZE] = { 98, 45, 77, 83 };

	char grades[SIZE];

	findGrades(scores, grades, SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		cout << names[i] << " " << scores[i] << " " << grades[i] << endl;
	}

	return 0;
}