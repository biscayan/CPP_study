#include "time.h"

int main()
{
	Time time(4, 5, 27);

	cout << "기존의 시간 : ";
	time.print();

	// 10만초 증가
	for (int i = 0; i < 100000; i++)
	{
		time.tick();
	}

	cout << "10만초가 지난 후의 시간 : ";
	time.print();

	return 0;
}