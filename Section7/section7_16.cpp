#include <iostream>
#include <cstdarg>

using namespace std;

//사용에 위험부담이 따름
//런타임 오류, 디버깅 힘듦
double print_average(int count, ...)
{
	double sum = 0;

	va_list list;

	va_start(list, count);

	for (int arg = 0; arg < count; ++count)
	{
		sum += va_arg(list, int);
	}

	va_end(list);

	return sum / count;
}

int main()
{
	cout << print_average(1, 1, 2, 3) << endl;
	cout << print_average(3, 1, 2, 3) << endl;
	cout << print_average(5, 1, 2, 3, 4, 5) << endl;
	cout << print_average(10, 1, 2, 3) << endl; // 에러발생

	return 0;
}