#include <iostream>

using namespace std;

int main()
{
	int num = 0, sum = 0;
	double count = 0.0, avg = 1;

	while (num != 1000)
	{
		cout << "���ڸ� �Է��ϼ��� : ";
		cin >> num;

		if (num != 1000)
		{			
			sum += num;
			count += 1.0;
		}
	}

	avg = sum / count;
	
	cout << endl;

	cout << "���ڵ��� �� : " << sum << endl;
	cout << "���ڵ��� ���� : " << static_cast<int>(count) << endl;
	cout << "���ڵ��� ��� : " << avg << endl;
	
	return 0;
}