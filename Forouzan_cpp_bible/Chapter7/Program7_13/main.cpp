#include "time.h"

int main()
{
	Time time(4, 5, 27);

	cout << "������ �ð� : ";
	time.print();

	// 10���� ����
	for (int i = 0; i < 100000; i++)
	{
		time.tick();
	}

	cout << "10���ʰ� ���� ���� �ð� : ";
	time.print();

	return 0;
}