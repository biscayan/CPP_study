#include <iostream>
#include <cmath>

int main()
{
	using namespace std;
	
	/*
	while (true)
	{
	
		int x, y;
		cin >> x >> y;

		cout << "Your two numbers are " << x << " and " << y << endl;

		if (x == y)
			cout << "First number and second number is equal" << endl;
		if (x > y)
			cout << "First number is larger than second number" << endl;
		if (x < y)
			cout << "First number is smaller than second number" << endl;

	}
	*/
	
	//부동소수점의 비교는 주의해야함

	double d1(100 - 99.99);
	double d2(10 - 9.99);

	cout << d1 << endl;//0.001
	cout << d2 << endl;//0.001

	double difference = abs(d1 - d2);
	cout << difference << endl;//5.32907e-15, 아주 작은 차이
	
	const double epsilon = 1e-10;

	if (d1 == d2)
		cout << "d1 and d2 are Equal" << endl;
	else
	{
		if (d1 > d2) cout << "d1 is larger than d2" << endl;
		if (d1 < d2) cout << "d1 is smaller than d2" << endl;
		if (difference < epsilon) cout << "d1 and d2 are approximately equal" << endl;
	}

	return 0;

}