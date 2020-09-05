#include <iostream>
#include <cmath>
#include <limits>

int main()
{
	using namespace std;

	//�߿��� ����, ������Ÿ���� ����� ���ѵǾ� �ְ�, ǥ���� �� �ִ� ������ �Ѿ�� ������ �����.!!

	short s = 1; //2 bytes = 2*8 bits = 16 bits
	int i = 1;
	long l = 1;
	long long ll = 1;


	cout << sizeof(short) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;


	cout << std::pow(2,sizeof(short)*8 - 1) -1 << endl; //2�� 16���� -1(+�Ǵ�- ǥ��) -1(0 ǥ��)
	cout << std::numeric_limits<short>::max() << endl; //ǥ���� �� �ִ� �ִ밪
	cout << std::numeric_limits<short>::min() << endl; //ǥ���� �� �ִ� �ּҰ�
	cout << std::numeric_limits<short>::lowest() << endl;

	short s_max = std::numeric_limits<short>::max() + 1;
	cout << s_max << endl; //overflow�߻�. ǥ���� �� �ִ� ������ �Ѿ�� ���� ���� ���� ���ư�

	short s_min = std::numeric_limits<short>::min() - 1;
	cout << s_min << endl; //overflow�߻�. ǥ���� �� �ִ� ������ �Ѿ�� ���� ū ���� ���ư�

	return 0;

}