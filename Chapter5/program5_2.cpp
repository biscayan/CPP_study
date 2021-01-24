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
		cout << "성적을 입력하세요 : ";
		cin >> score;

		sum += score;
		count++;
	}

	average = static_cast<double>(sum) / count;

	cout << "평균점수 : " << average << endl;

	return 0;
}