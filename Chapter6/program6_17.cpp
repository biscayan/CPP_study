#include <iostream>

using namespace std;

int get_score()
{
	int score;

	do
	{
		cout << "�л��� ������ �Է��ϼ��� (0~100) : ";
		cin >> score;
	} while (score < 0 || score>100);

	return score;
}

char find_grade(int score)
{
	char grade;

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

	return grade;
}

void print_result(int score, char grade)
{
	cout << "������" << endl;
	cout << "���� : " << score << "��" << endl;
	cout << "���� : " << grade << endl;
}

int main()
{
	int score;
	char grade;

	score = get_score();
	grade = find_grade(score);
	print_result(score, grade);

	return 0;
}