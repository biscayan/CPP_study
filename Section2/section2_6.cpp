#include <iostream>

bool isEqual(int x, int y)
{
	//x와 y가 같으면 true, 다르면 false return
	bool result = (x == y);

	return result;
}

int main()
{
	using namespace std;

	bool b1 = true; //copy initialization
	bool b2(false); //direct initialization
	bool b3{ true }; //uniform initialization

	cout << b1 << endl; //1출력
	cout << b2 << endl; //0출력

	cout << std::boolalpha;
	cout << b1 << endl; //true출력
	cout << b2 << endl; //false출력

	cout << !b1 << endl; //!는 not연산자 false출력
	cout << !b2 << endl; //!는 not연산자 true출력

	//and와 or operator는 기호를 두번씩 쳐줘여한다. 실수 주의!!
	//둘다 true일때만 true출력
	cout << (true && true) << endl; //&&는 and operator
	cout << (true && false) << endl;
	cout << (false && true) << endl;
	cout << (false && false) << endl;

	//둘 중 하나만 true여도 true출력
	cout << (true || true) << endl; //||는 or operator
	cout << (true || false) << endl;
	cout << (false || true) << endl;
	cout << (false || false) << endl;

	int a = 3;
	int b = 1;

	if (a > b)
	//출력이 두 줄 이상일때는 중괄호를 사용해야함
	{
		cout << "This is true" << endl;
		cout << a << " is larger than "<< b << endl;
	}
	else
	{
		cout << "This is false" << endl;
		cout << a << " is smaller than " << b << endl;
	}
		
	cout << isEqual(1, 1) << endl;
	cout << isEqual(0, 1) << endl;

	return 0;
}	