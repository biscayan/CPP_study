#include <iostream>

using namespace std;

int main()
{
	//앞에 const가 붙어야만 기호적 상수처럼 사용
	const char* NAME1 = "jack jack";
	const char* NAME2 = "jack jack";

	//상수명은 다르지만 값이 같으므로 같은 주소를 할당함
	cout << (uintptr_t)NAME1 << endl; //9468720
	cout << (uintptr_t)NAME2 << endl; //9468720

	int int_arr[] = { 1,3,5,7,9 };
	char char_arr[] = "Hello, world!";
	const char* NAME = "jack jack";

	//cout에서 문자의 포인터는 문자열이 아닐까 가정을 하고 특별히 처리를 함
	//따라서 주소를 출력하는 것이 아니라 그 값을 출력함
	cout << int_arr << endl; //010FF834
	cout << char_arr << endl; //Hello, world!
	cout << NAME << endl; //jack jack

	return 0;
}