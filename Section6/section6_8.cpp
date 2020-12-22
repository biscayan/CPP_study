#include <iostream>

using namespace std;

int main()
{
	int arr[5] = { 1,3,5,7,9 };

	//정적array와 pointer는 같음

	//따라서 array는 첫번 째 요소의 주소를 가짐 
	cout << arr << endl; //001DFD7C
	cout << &arr[0] << endl; //001DFD7C

	//de-referencing
	cout << *arr << endl; //1

	int* ptr = arr;
	cout << ptr << endl; //001DFD7C
	cout << *ptr << endl; //1

	cout << sizeof(arr) << endl; //20
	cout << sizeof(ptr) << endl; //4 //포인터 변수 자체의 사이즈는 4바이트임

	//포인터 연산 (pointer arithmetic)
	cout << *ptr << " " << *(ptr + 1) << " " << *(ptr +2) << endl; // 1 3 5

	char name[] = "HyeongJu";
	cout << *name << endl; //H


	return 0;
}


