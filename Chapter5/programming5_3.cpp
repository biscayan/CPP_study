#include <iostream>

using namespace std;

int main()
{
	int num = 0, sum = 0;
	double count = 0.0, avg = 1;

	while (num != 1000)
	{
		cout << "숫자를 입력하세요 : ";
		cin >> num;

		if (num != 1000)
		{			
			sum += num;
			count += 1.0;
		}
	}

	avg = sum / count;
	
	cout << endl;

	cout << "숫자들의 합 : " << sum << endl;
	cout << "숫자들의 개수 : " << static_cast<int>(count) << endl;
	cout << "숫자들의 평균 : " << avg << endl;
	
	return 0;
}