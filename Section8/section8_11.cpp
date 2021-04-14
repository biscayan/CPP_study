#include <iostream>

using namespace std;

class Something
{
private:
	static int s_value;
	int m_value;

public:

	// static은 생성자에서 초기화 불가능, c++에서는 static생성자도 만들수 없음
	/*
	* Something()
		:s_value(100)
	{}
	*/

	static int get_value()
	{
		return s_value;
	}

	// 정적멤버함수에서는 this포인터를 사용할 수 없고 static이 아닌것도 사용이 불가능하다
	/*
	static int get_value()
	{
		return this->s_value;
		return m_value;
	}
	*/
};

int Something::s_value = 10;

int main()
{
	cout << Something::get_value() << endl; //10

	int (*ptr)() = &Something::get_value;

	cout << ptr() << endl; //10

	return 0;
}