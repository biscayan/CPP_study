#include <iostream>

using namespace std;

int main()
{
	int num;
	int num_sum = 0;

	cout << "양의 정수를 입력하세요 : ";
	cin >> num;

	do
	{
		num_sum += num % 10;
		num /= 10;
	} while (num);

	cout << "자릿수의 합 : " << num_sum << endl;

	return 0;
}