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

	// ������ �������� �۾Ƶ� ������, 0�� �ڵ����� ä����
	my_arr = { 1,21,13,40 };

	// �Ȱ��� array�� ù ��° ��Ҹ� ���
	cout << my_arr[0] << endl; // 1
	cout << my_arr.at(0) << endl; // 1

	/*
	// at�� �̸� üũ�� �غ��� ������ ì��� ����ó���� �ߵ���, �ӵ��� ���� �� ���� �� ����
	cout << my_arr[10] << endl;
	cout << my_arr.at(10) << endl;
	*/
	
	cout << my_arr.size() << endl; // 5
	print_len(my_arr); // 5

	// array�� ó������ ���������� ����, ���ĺκ��� ���� ������ ���� ����
	std::sort(my_arr.begin(), my_arr.end());

	for (auto &element : my_arr)
	{
		cout << element << " "; // 0 1 13 21 40
	}
	cout << endl;

	// �������� ����
	std::sort(my_arr.rbegin(), my_arr.rend());

	for (auto& element : my_arr)
	{
		cout << element << " "; // 40 21 13 1 0
	}
	cout << endl;

	return 0;
}