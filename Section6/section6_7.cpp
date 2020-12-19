#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	int x = 5;
	double y = 1.0;

	// pointer는 저쪽 주소에 가면 이 데이터가 있다는 것을 간접적으로 가리키지만
	// de-reference는 그 주소에 진짜 무엇이 있는지 들여다보겠다며 직접적으로 접근하는 것을 뜻함

	// de-reference operator(*)
	//x의 메모리주소에 있는 값을 출력
	cout << *&x << endl; //5

	//pointer는 메모리 주소를 저장하는 변수이다
	int *ptr_x = &x;

	//데이터의 변수의 타입과 동일해야함
	double *ptr_y = &y;
	
	cout << (int)ptr_x << endl; //3799428
	cout << ptr_y << endl; //0039F974

	//de-referencing
	cout << *ptr_x << endl; //5
	cout << *ptr_y << endl; //1
	
	cout << typeid(ptr_x).name() << endl; //int *

	cout << sizeof(x) << endl; //4
	cout << sizeof(y) << endl; //8

	cout << sizeof(&x) << endl; //4
	cout << sizeof(ptr_x) << endl; //4

	//double자체는 8바이트이지만 주소는 4바이트임
	cout << sizeof(&y) << endl; //4
	cout << sizeof(ptr_y) << endl; //4

	
	return 0;
}
