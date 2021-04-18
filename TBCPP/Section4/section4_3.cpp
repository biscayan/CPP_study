#include <iostream>

namespace a
{
	int my_variable = 1;
}

namespace b
{
	int my_variable = 2;
}

int main()
{
	using namespace std;

	//using namespace a;
	//using namespace b;

	//my_variable이 namespace a와 b 모두에 있으므로 ambiguous함
	cout << my_variable << endl;
	
	//해결책
	//1.namespace를 지정해줌
	cout << a::my_variable << endl;
	cout << b::my_variable << endl;

	//2.namespace를 블록으로 감싸줌
	{
		using namespace a;
		cout << my_variable << endl;
	}

	{
		using namespace b;
		cout << my_variable << endl;
	}

	return 0;

}