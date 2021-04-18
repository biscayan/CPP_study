#include <iostream>
#include <array>
#include <tuple>

using namespace std;

// return by value
int get_value(int x)
{
	int val = 2 * x;

	return val;
}

// return by address
int* allocate_memory(int size)
{
	return new int[size];
}

// return by reference
int& get_reference(std::array<int,100>& arr, int x)
{
	return arr[x];
}

// return by tuple
std::tuple<int, double> get_tuple()
{
	int a = 10;
	double b = 3.14;

	return std::make_tuple(a, b);
}

int main()
{
	int value = get_value(3);
	cout << value << endl; // 6

	int* array = allocate_memory(1024);
	delete[] array;
	
	std::array<int, 100> my_arr;
	my_arr[30] = 10;

	// array의 30번째 값을 10에서 1000으로 바꿈
	get_reference(my_arr, 30) = 1000;
	cout << my_arr[30] << endl; // 1000

	std::tuple<int, double> my_tuple = get_tuple();
	cout << std::get<0>(my_tuple) << endl; // 10
	cout << std::get<1>(my_tuple) << endl; // 3.14

	// c++ 17에서 가능
	auto [a, b] = get_tuple();
	cout << a << endl; // 10
	cout << b << endl; //3.14

	return 0;
}