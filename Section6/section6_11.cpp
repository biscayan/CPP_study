#include <iostream>

using namespace std;

int main()
{
	//정적으로 할당된 메모리는 stack에 들어가고
	//동적으로 할당된 메모리는 heap에 들어감
	
	//new int는 os로부터 받아온 4바이트의 데이터의 주소를 알려줌
	//nothrow는 메모리를 할당받지 못해도 오류를 발생시키지 않고 메모리가 할당될 때까지 기다림
	int* ptr = new (std::nothrow) int{ 7 };

	if (ptr)
	{
		cout << ptr << endl; //0131C1A0
		cout << *ptr << endl; //7
	}
	else
	{
		cout << "Could not allocate memory" << endl;
	}

	//delete는 할당받은 메모리를 os에 돌려줌
	delete ptr;
	ptr = nullptr;

	cout << "After delete" << endl;

	if (ptr != nullptr)
	{
		cout << ptr << endl;
		cout << *ptr << endl;
	}

	//memory leakage
	/*
	while (true)
	{
		int* ptr2 = new int;
		cout << ptr2 << endl;
	}
	*/

	return 0;
}