#include <iostream>
#include <iomanip>

using namespace std;

void rowTransform(const int originalArray[][4], int rowArray[])
{
	int i = 0;
	int j = 0;

	for (int k = 0; k < 8; k++)
	{
		rowArray[k] = originalArray[i][j];
		j++;
		if (j > 3)
		{
			i++;
			j = 0;
		}
	}
}

void colTransform(const int originalArray[][4], int colArray[])
{
	int i = 0;
	int j = 0;

	for (int k = 0; k < 8; k++)
	{
		colArray[k] = originalArray[i][j];
		i++;
		if (i>1)
		{
			j++;
			i = 0;
		}
	}
}

void printTwoDimensional(const int twoDimensional[][4], int rowsize)
{
	for (int i = 0; i < rowsize; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << setw(4) << twoDimensional[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

void printOneDimensional(const int OneDimensional[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << setw(4) << OneDimensional[i];
	}
	cout << endl;
}

int main()
{
	int originalArray[2][4] = { {0,1,2,3},{4,5,6,7} };

	const int SIZE = 8;

	int rowArray[SIZE];
	int colArray[SIZE];

	rowTransform(originalArray, rowArray);
	colTransform(originalArray, colArray);

	cout << "     원본 배열" << endl;
	printTwoDimensional(originalArray, 2);

	cout << "행 방향으로 선형 변환 : ";
	printOneDimensional(rowArray, SIZE);

	cout << endl;

	cout << "열 방향으로 선형 변환 : ";
	printOneDimensional(colArray, SIZE);
}