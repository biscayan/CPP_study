#include <iostream>

//namespace를 통해 두개의 영역이 확실히 다르다는 것을 알려줌
namespace work1
{
	int a = 1;
	void dosomething()
	{
		a += 3;
	}
}

namespace work2
{
	int a = 1;
	void dosomething()
	{
		a += 5;
	}
}

int main()
{
	using namespace std;

	int apple = 5;

	//int apple = 5; 이름이 같은 것은 같은 지역에서 하나만 있어여함

	{
		//int apple = 3; 블록 안에서 재정의를 하면 블록 안에서면 적용됨
		//cout << apple << endl; //3

		apple = 1; //이미 정의된 apple에 값만 바꿔줌 
		cout << apple << endl; //1
	}

	cout << apple << endl; //1

	// :: -> scope resolution operator (범위결정연산자)
	work1::a;
	work1::dosomething(); // +3

	work2::a;
	work2::dosomething(); // +5

	cout << work1::a << endl; //4
	cout << work2::a << endl; //6
	
	return 0;
}

//apple = 3; 메모리가 반납되어 선언 불가능