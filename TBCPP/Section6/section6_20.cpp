#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void print_len(array<int, 5> arr)
{
	cout << arr.size() << endl;
}

int main()
{

	std::array<int, 5> my_arr = { 1,2,3,4,5 };

	// 지정한 개수보다 작아도 괜찮음, 0이 자동으로 채워짐
	my_arr = { 1,21,13,40 };

	// 똑같이 array의 첫 번째 요소를 출력
	cout << my_arr[0] << endl; // 1
	cout << my_arr.at(0) << endl; // 1

	/*
	// at은 미리 체크를 해보고 문제가 챙기면 예외처리를 발동함, 속도가 조금 더 느릴 수 있음
	cout << my_arr[10] << endl;
	cout << my_arr.at(10) << endl;
	*/
	
	cout << my_arr.size() << endl; // 5
	print_len(my_arr); // 5

	// array의 처음부터 마지막까지 정렬, 정렬부분은 따로 정해줄 수도 있음
	std::sort(my_arr.begin(), my_arr.end());

	for (auto &element : my_arr)
	{
		cout << element << " "; // 0 1 13 21 40
	}
	cout << endl;

	// 역순으로 정렬
	std::sort(my_arr.rbegin(), my_arr.rend());

	for (auto& element : my_arr)
	{
		cout << element << " "; // 40 21 13 1 0
	}
	cout << endl;

	return 0;
}