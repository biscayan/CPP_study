#include <iostream>

namespace Myspace1
{
	//namespace 안에 namespace를 또 넣을 수 있다.
	namespace Innerspace
	{
		int My_function()
		{
			return 0;
		}
	}

	int doSomething(int a, int b)
	{
		return a + b;
	}
}

namespace Myspace2
{	
	//함수의 이름이 같은 것을 namespace를 지정해줌으로서 해결
	int doSomething(int a, int b)
	{
		return a * b;
	}
}

using namespace std;

int main()
{
	using namespace Myspace1;
	using namespace Myspace1::Innerspace;
	cout << doSomething(3, 4) << endl;

	cout << My_function() << endl;

	//namespace 안은 ::으로 표시
	cout << Myspace2::doSomething(3, 4) << endl;

}