#include <iostream>

using namespace std;

int main()
{
	int value = 7;
	int* ptr = &value;

	//int type에 맞춰서 4씩 이동
	cout << uintptr_t(ptr - 2) << endl; //8780532
	cout << uintptr_t(ptr - 1) << endl; //8780536
	cout << uintptr_t(ptr) << endl; //8780540
	cout << uintptr_t(ptr + 1) << endl; //8780544
	cout << uintptr_t(ptr + 2) << endl; //8780548

	int array[] = { 9,7,5,3,1 };
	int* ptr_arr = array;

	for (int i = 0; i < 5; ++i)
	{
		cout << array[i] << " " << uintptr_t(&array[i]) << endl;
		cout << *(ptr_arr+i) << " " << uintptr_t(ptr_arr + i) << endl;
	}

	char name[] = "jack jack";
	const int N_NAME = sizeof(name) / sizeof(name[0]);
	
	for (int i = 0; i < N_NAME; ++i)
	{
		cout << *(name + i);
	}

	return 0;
}