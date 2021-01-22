#include <iostream>

using namespace std;

// void pointer = generic pointer

int main()
{
	int i = 5;
	float f = 3.0f;
	char c = 'c';

	void  *ptr = nullptr;

	// pointer에 모두 대입이 가능하지만 어떤 것이 들어가 있는지 확인이 어렵다.
	ptr = &i;
	ptr = &f;
	ptr = &c;

	// 몇 바이트를 더해야 하는지 알 수 없으므로 연산 불가능
	//cout << ptr + 1 << endl;
	
	// de-referencing도 불가능, 값을 가져올 때는 강제로 casting해야함
	//cout << *ptr << endl;
	cout << *static_cast<char*>(ptr) << endl; //c

	return 0;
}