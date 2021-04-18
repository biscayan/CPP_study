#include <iostream>

using namespace std;

int main()
{
	int payment;
	int count = 0;

	cout << "지불해야 하는 금액을 입력하세요 : ";
	cin >> payment;

	while (payment)
	{
		if (payment >= 100)
		{
			payment -= 100;
			count += 1;
		}
		else if (payment >= 50)
		{
			payment -= 50;
			count += 1;
		}
		else if (payment >= 20)
		{
			payment -= 20;
			count += 1;
		}
		else if (payment >= 10)
		{
			payment -= 10;
			count += 1;
		}
		else if (payment >= 5)
		{
			payment -= 5;
			count += 1;
		}
		else if (payment >= 1)
		{
			payment -= 1;
			count += 1;
		}
	}

	cout << "출력해야 하는 지폐의 최소 개수는 " << count << "개 입니다." << endl;

	return 0;
}

