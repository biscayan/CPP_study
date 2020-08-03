#include <iostream>

int main()
{
	//x라는 메모리를 담을 변수를 지정, 123이라는 정보를 저장
	//x->L-value, 123->R-value
	int x = 123; //initialization
	//int x(123);으로도 사용 가능

	x = 5; //assignment

	std::cout << x << std::endl;
	//std::cout << &x << std::endl; //&를 통해 메모리 주소 확인
	return 0;
}