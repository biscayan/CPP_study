#include <iostream>

using namespace std;

int main()
{
	int score;
	int sum = 0;
	double average;

	int count = 0;

	while (count < 4)
	{
		cout << "������ �Է��ϼ��� : ";
		cin >> score;

		sum += score;
		count++;
	}

	average = static_cast<double>(sum) / count;

	cout << "������� : " << average << endl;

	return 0;
}