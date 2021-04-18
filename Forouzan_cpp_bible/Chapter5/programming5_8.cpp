#include <iostream>

using namespace std;

int main()
{
	int num;

	cout << "양의 정수를 입력하세요 (범위 -> 1~100) : ";
	cin >> num;

	cout << num << "의 약수 : ";

	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			cout << i << " ";
		}
	}

	return 0;
}