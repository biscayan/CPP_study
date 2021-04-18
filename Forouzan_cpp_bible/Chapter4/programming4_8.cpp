#include <iostream>

using namespace std;

int main()
{
	int x, y;

	cout << "x좌표를 입력하세요 : ";
	cin >> x;

	cout << "y좌표를 입력하세요 : ";
	cin >> y;

	if (x > 0 && y > 0)
	{
		cout << "점은 1사분면에 있습니다." << endl;
	}
	if (x < 0 && y > 0)
	{
		cout << "점은 2사분면에 있습니다." << endl;
	}
	if (x < 0 && y < 0)
	{
		cout << "점은 3사분면에 있습니다." << endl;
	}
	if (x > 0 && y < 0)
	{
		cout << "점은 4사분면에 있습니다." << endl;
	}

	return 0;
}