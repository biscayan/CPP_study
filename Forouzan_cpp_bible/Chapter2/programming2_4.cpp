#include <iostream>

using namespace std;

int main()
{
	int hours;
	int minutes;
	int seconds;

	cout << "�ð��� �Է��ϼ��� : ";
	cin >> hours;

	cout << "���� �Է��ϼ��� : ";
	cin >> minutes;

	cout << "�ʸ� �Է��ϼ��� : ";
	cin >> seconds;
	
	int result = hours*3600 + minutes*60 + seconds;

	cout << result << " seconds" << endl;

	return 0;
}