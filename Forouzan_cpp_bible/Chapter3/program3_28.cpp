#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double double_num;

	cout << "���ڸ� �Է��ϼ��� : ";
	cin >> double_num;

	int int_part = static_cast<int>(double_num);
	double float_part = double_num - int_part;

	cout << "���� �� : " << double_num << endl;
	cout << "�����κ� : " << int_part << endl;
	cout << "�Ҽ��κ� : " << float_part << endl;

	return 0;
}