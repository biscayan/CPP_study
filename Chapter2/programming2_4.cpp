#include <iostream>

using namespace std;

int main()
{
	int hours;
	int minutes;
	int seconds;

	cout << "시간을 입력하세요 : ";
	cin >> hours;

	cout << "분을 입력하세요 : ";
	cin >> minutes;

	cout << "초를 입력하세요 : ";
	cin >> seconds;
	
	int result = hours*3600 + minutes*60 + seconds;

	cout << result << " seconds" << endl;

	return 0;
}