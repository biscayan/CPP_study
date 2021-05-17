#include<iostream>
#include <math.h>

using namespace std;

void printElem(int arr[], int size)
{	
	cout << "�迭�� ��� : ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


void pringAvg(int arr[], int size)
{
	double avg = 0;

	for (int i = 0; i < size; i++)
	{
		avg += arr[i];
	}

	avg /= 10;

	cout << "�迭�� ��� : " << avg << endl;
}


void pringStd(int arr[], int size)
{
	double avg = 0;

	for (int i = 0; i < size; i++)
	{
		avg += arr[i];
	}

	avg /= 10;

	double square = 0;

	for (int i = 0; i < size; i++)
	{
		square += pow(arr[i] - avg, 2);
	}

	double std = sqrt(square) / size;

	cout << "�迭�� ǥ������ : " << std << endl;
}


int main()
{
	const int CAPACITY = 10;
	int arr[CAPACITY];

	for (int i = 0; i < CAPACITY; i++)
	{
		arr[i] = rand() % 100 + 1;
	}

	printElem(arr, CAPACITY);
	pringAvg(arr, CAPACITY);
	pringStd(arr, CAPACITY);

	return 0;
}