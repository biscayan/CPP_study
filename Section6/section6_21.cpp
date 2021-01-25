#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// �����Ҵ��� �Ǳ� ������ ����� ����� ��
	// vector�� �޸𸮸� �˾Ƽ� ������, delete�� �ʿ����
	std::vector<int> arr = { 1,2,3,4,5 };

	cout << arr.size() << endl; // 5

	// �������� std::array������ ����
	cout << arr[0] << endl; // 1
	cout << arr.at(0) << endl; // 1

	cout << arr.size() << endl; // 5
	
	// resizing�� ���ϰ� �� �� ����
	arr.resize(10);
	cout << arr.size() << endl; // 10

	return 0;
}