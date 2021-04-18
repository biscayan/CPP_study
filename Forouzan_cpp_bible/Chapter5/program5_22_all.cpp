#include <iostream>

using namespace std;

int main()
{
	int size, num, divider;
	bool success = true;

	do
	{
		cout << "리스트의 사이즈를 입력하세요 : ";
		cin >> size;
	} while (size <= 0);

	do
	{
		cout << "어떤 숫자로 나눌지 정하세요 : ";
		cin >> divider;
	} while (divider <= 0);

	for (int i = 0; (i < size) && (success); i++)
	{
		cout << "리스트에 넣을 숫자를 입력하세요 : ";
		cin >> num;

		success = (num % divider == 0);
	}

	if (success)
	{
		cout << "모든숫자는 " << divider << "로 나눌 수 있습니다." << endl;
	}
	else
	{
		cout << num << "은 " << divider << "로 나눌 수 없습니다." << endl;
	}

	return 0;
}