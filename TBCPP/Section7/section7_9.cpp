#include <iostream>
#include <array>

using namespace std;

int func()
{
	return 5;
}

int goo()
{
	return 10;
}

bool odd(const int& number)
{
	if (number % 2 == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool even(const int& number)
{
	if (number % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void print_nums(const array<int, 10>& my_array, bool(*check_func)(const int&))
{
	for (auto element : my_array)
	{
		if (check_func(element) == true)
		{
			cout << element << " ";
		}
	}
	cout << endl;
}

int main()
{
	cout << func << endl; //009B11F9, 함수도 포인터이다 메모리주소를 가지고 있음

	// 함수 포인터
	int(*funcptr)() = func;

	cout << funcptr() << endl; //5

	funcptr = goo;

	cout << funcptr() << endl; //10

	array<int, 10> my_array{ 1,2,3,4,5,6,7,8,9,10 };

	print_nums(my_array, odd); //1 3 5 7 9
	print_nums(my_array, even); //2 4 6 8 10

	return 0;
}