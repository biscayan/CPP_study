#include <iostream>
#include <cmath>
#include <limits>

int main()
{
	using namespace std;

	//중요한 것은, 데이터타입이 사이즈가 제한되어 있고, 표현할 수 있는 범위를 넘어가면 문제가 생긴다.!!

	short s = 1; //2 bytes = 2*8 bits = 16 bits
	int i = 1;
	long l = 1;
	long long ll = 1;


	cout << sizeof(short) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;


	cout << std::pow(2,sizeof(short)*8 - 1) -1 << endl; //2의 16제곱 -1(+또는- 표현) -1(0 표현)
	cout << std::numeric_limits<short>::max() << endl; //표현할 수 있는 최대값
	cout << std::numeric_limits<short>::min() << endl; //표현할 수 있는 최소값
	cout << std::numeric_limits<short>::lowest() << endl;

	short s_max = std::numeric_limits<short>::max() + 1;
	cout << s_max << endl; //overflow발생. 표현할 수 있는 범위를 넘어가면 가장 작은 수로 돌아감

	short s_min = std::numeric_limits<short>::min() - 1;
	cout << s_min << endl; //overflow발생. 표현할 수 있는 범위를 넘어가면 가장 큰 수로 돌아감

	return 0;

}