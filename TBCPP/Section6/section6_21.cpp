#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// 동적할당이 되기 때문에 사이즈를 안적어도 됨
	// vector는 메모리를 알아서 지워줌, delete이 필요없음
	std::vector<int> arr = { 1,2,3,4,5 };

	cout << arr.size() << endl; // 5

	// 차이점은 std::array에서와 같음
	cout << arr[0] << endl; // 1
	cout << arr.at(0) << endl; // 1

	cout << arr.size() << endl; // 5
	
	// resizing도 편하게 할 수 있음
	arr.resize(10);
	cout << arr.size() << endl; // 10

	return 0;
}