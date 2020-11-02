#include <iostream>

//함수의 parameter는 auto로 불가능
auto add_num(int x, int y)
{
	return x + y;
}

//trailing
//auto add_num(int x, int y) -> int;

int main()
{
	using namespace std;
	
	//a가 int라는 정보는 redundant함
	//int a = 123;

	//초기화를 하지 않으면 auto를 사용할 수 없음
	auto a = 123; //자동으로 a를 int로 배정
	auto b = 1.0 + 2.0;
	
	//함수의 return값도 auto로 가능
	auto result = add_num(1, 2);

	return 0;
}