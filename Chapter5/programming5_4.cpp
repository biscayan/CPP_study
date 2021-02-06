#include <iostream>

using namespace std;

int main()
{
	int num;
	int positive = 0, negative = 0;

	cout << "숫자를 입력하세요 : ";
	cin >> num;

	if (num < 0)
	{
		negative += 1;
	}

	else if (num > 0)
	{
		positive += 1;
	}

	while (num != 0)
	{
		cout << "숫자를 입력하세요 : ";
		cin >> num;

		if (num < 0)
		{
			negative += 1;
		}

		else if (num > 0)
		{
			positive += 1;
		}
	}

	cout << endl;

	cout << "음의 정수의 개수 : " << negative << endl;
	cout << "양의 정수의 개수 : " << positive << endl;

	return 0;
}