#include <iostream>

using namespace std;

int main()
{
	int price = 1000;
	int count;
	double total;

	cout << "구매 수량을 입력하세요 : ";
	cin >> count;

	if (count >= 100)
	{
		total = (price * count) - (price * count * 0.1);
	}
	else if (count >= 50)
	{
		total = (price * count) - (price * count * 0.05);
	}
	else if (count >= 10)
	{
		total = (price * count) - (price * count * 0.03);
	}
	else 
	{
		total = (price * count);
	}

	cout << "계산해야 할 금액은 " << total << "원입니다." << endl;

	return 0;
}