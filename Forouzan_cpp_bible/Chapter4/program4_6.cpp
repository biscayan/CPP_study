#include <iostream>

using namespace std;

int main()
{
	int score;
	char grade;

	cout << "점수를 입력하세요 : ";
	cin >> score;

	if (score >= 90)
	{
		grade = 'A';
	}
	else if (score >= 80)
	{
		grade = 'B';
	}
	else if (score >= 70)
	{
		grade = 'C';
	}
	else if (score >= 60)
	{
		grade = 'D';
	}
	else
	{
		grade = 'F';
	}

	cout << "학점 : " << grade;

	return 0;
}