#include <iostream>

using namespace std;

int main()
{
	int arr_len;
	cin >> arr_len;

	// arr_len을 입력받아 array의 메모리를 동적으로 할당
	// array에서 비어 있는 자리는 0이 자동으로 채워짐
	int* array = new int[arr_len] {};

	array[0] = 1;
	array[1] = 2;
	
	for (int i = 0; i < arr_len; ++i)
	{
		cout << array[i] << endl;
	}
	
	// new를 쓰면 delete도 꼭 사용을 해라!
	delete[] array;

	return 0;
}