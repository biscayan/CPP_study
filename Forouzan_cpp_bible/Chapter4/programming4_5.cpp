#include <iostream>

using namespace std;

int main()
{
	int score1, score2, score3;
	double average;
	char grade;

	cout << "3俺狼 己利阑 涝仿窍技夸." << endl;

	cout << "己利1 : ";
	cin >> score1;

	cout << "己利2 : ";
	cin >> score2;

	cout << "己利3 : ";
	cin >> score3;

	average = (score1 + score2 + score3) / 3.0;

	if (average >= 90)
	{
		grade = 'A';
	}
	else if (average >= 80)
	{
		if (score3 >= 90)
		{
			grade = 'A';
		}
		else
		{
			grade = 'B';
		}
	}
	else if (average >= 70)
	{
		if (score3 >= 80)
		{
			grade = 'B';
		}
		else
		{
			grade = 'C';
		}
	}
	else if (average >= 60)
	{
		if (score3 >= 70)
		{
			grade = 'C';
		}
		else
		{
			grade = 'D';
		}
	}
	else
	{
		if (score3 >= 60)
		{
			grade = 'D';
		}
		else
		{
			grade = 'F';
		}
	}
	
	cout << "己利 : " << grade << endl;

	return 0;
}