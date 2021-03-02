// assertion은 debug 모드에서 작동함

#include <iostream>
#include <cassert>
#include <array>

using namespace std;

void print_value(const array<int, 5>& my_array, const int& idx)
{
	// assert를 통해서 오류를 바로잡기에 좋음
	assert(idx >= 0);
	assert(idx <= my_array.size()-1);

	cout << my_array[idx] << endl;
}

int main()
{
	array<int, 5> my_array{ 1,2,3,4,5 };
	
	print_value(my_array, 10); // Assertion failed

	const int x = 10;

	// static assert는 compile time에 결정이 될 때만 사용이 가능
	// assert에 문구를 남길수도 있음
	static_assert(x == 5, "X should be 5");
	
	return 0;
}