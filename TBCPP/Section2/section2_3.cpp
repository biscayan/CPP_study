#include <iostream>

int main()
{
	using namespace std;

	std::int16_t i(5); //16��Ʈ (2����Ʈ)
	std::int8_t myint = 65; //8��Ʈ (1����Ʈ) char type

	std::int_fast8_t fi(5); //8��Ʈ �� ���� ��
	std::int_least64_t fl(5); //��� 64��Ʈ�� ���� ������ Ÿ��

	return 0;

}