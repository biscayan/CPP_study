#include <iostream>
#include <iomanip> // io manipulator
#include <limits>
#include <cmath>

int main()
{
	using namespace std;

	float f(3.14f);
	double d(3.14);
	long double ld(3.14);

	cout << sizeof(f) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(ld) << endl;

	cout << numeric_limits<float>::max() << endl;
	cout << numeric_limits<double>::max() << endl;
	cout << numeric_limits<long double>::max() << endl;
	
	cout << numeric_limits<float>::lowest() << endl;
	cout << numeric_limits<double>::lowest() << endl;
	cout << numeric_limits<long double>::lowest() << endl;

	cout << 3.14 << endl; 
	cout << 31.4e-1 << endl; //31.4 * 0.1
	cout << 31.4e-2 << endl; //31.4 * 0.01
	cout << 31.4e1 << endl; //31.4 * 10
	cout << 31.4e2 << endl; //31.4 * 100

	cout << std::setprecision(17); //17��°�ڸ����� ǥ��
	cout << 1.0 / 3.0 << endl;

	double d1(1.0);
	double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

	cout << d1 << endl; //1
	cout << d2 << endl; //0.99999999999999989 -> ������ �����Ǿ� �ٸ� ����� ����

	//0���� ������ ���� ������ ��
	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;

	cout << posinf << " " << std::isinf(posinf) << endl; //inf������ ���
	cout << neginf << " " << std::isinf(neginf) << endl;
	cout << nan << " " << std::isnan(nan) << endl; //nan������ ���

	return 0;
}