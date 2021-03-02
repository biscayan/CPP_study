// assertion�� debug ��忡�� �۵���

#include <iostream>
#include <cassert>
#include <array>

using namespace std;

void print_value(const array<int, 5>& my_array, const int& idx)
{
	// assert�� ���ؼ� ������ �ٷ���⿡ ����
	assert(idx >= 0);
	assert(idx <= my_array.size()-1);

	cout << my_array[idx] << endl;
}

int main()
{
	array<int, 5> my_array{ 1,2,3,4,5 };
	
	print_value(my_array, 10); // Assertion failed

	const int x = 10;

	// static assert�� compile time�� ������ �� ���� ����� ����
	// assert�� ������ ������� ����
	static_assert(x == 5, "X should be 5");
	
	return 0;
}