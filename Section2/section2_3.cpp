#include <iostream>

int main()
{
	using namespace std;

	std::int16_t i(5); //16비트 (2바이트)
	std::int8_t myint = 65; //8비트 (1바이트) char type

	std::int_fast8_t fi(5); //8비트 중 빠른 것
	std::int_least64_t fl(5); //적어도 64비트를 갖는 데이터 타입

	return 0;

}