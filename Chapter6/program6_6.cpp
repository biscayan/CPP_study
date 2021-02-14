#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	long elapsed_seconds = time(0);
	int current_seconds = elapsed_seconds % 60;

	long elapsed_minutes = elapsed_seconds / 60;
	int current_minutes = elapsed_minutes % 60;

	long elapsed_hours = elapsed_minutes / 60;
	int current_hours = elapsed_hours % 24;
	
	cout << "현재시간 : " << current_hours << "시 " << current_minutes << "분 " << current_seconds << "초" << endl;

	return 0;
}