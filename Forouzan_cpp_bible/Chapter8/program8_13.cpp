#include <iostream>
#include <iomanip>

using namespace std;

void findStudentAver(int const scores[][3], double stdAver[], int rowSize, int colSize)
{
	for (int i = 0; i < rowSize; i++)
	{
		int sum = 0;

		for (int j = 0; j < colSize; j++)
		{
			sum += scores[i][j];
		}

		double average = static_cast<double>(sum) / colSize;

		stdAver[i] = average;
	}
}


void findTestAver(int const scores[][3], double tstAver[], int rowSize, int colSize)
{
	for (int j = 0; j < colSize; j++)
	{
		int sum = 0;

		for (int i = 0; i < rowSize; i++)
		{
			sum += scores[i][j];
		}

		double average = static_cast<double>(sum) / rowSize;

		tstAver[j] = average;
	}
}

int main()
{
	const int rowSize = 5;
	const int colSize = 3;

	int scores[rowSize][colSize] = {{82,65,72},
									{73,70,80},
									{91,67,40},
									{72,72,68},
									{65,90,80}};

	double stdAver[rowSize];
	double tstAver[colSize];

	findStudentAver(scores, stdAver, rowSize, colSize);
	findTestAver(scores, tstAver, rowSize, colSize);

	cout << "                     시험점수                  평균" << endl;
	cout << "         ---------------------------------   -------" << endl;

	for (int i = 0; i < rowSize; i++)
	{
		for (int j = 0; j < colSize; j++)
		{
			cout << setw(12) << scores[i][j];
		}

		cout << fixed << setprecision(2) << "           " << stdAver[i] << endl;
	}

	cout << "         ---------------------------------" << endl;
	cout << "최종점수 : ";
	for (int j = 0; j < colSize; j++)
	{
		cout << fixed << setprecision(2) << stdAver[j] << "     ";
	}
	cout << endl;

	return 0;
}