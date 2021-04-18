#include <iostream>
#include <typeinfo>

int main()
{
	using namespace std;

	//어떠한 data type인지를 알려줌
	cout << typeid(4.0).name() << endl;  //double

	auto a = 123;
	cout << typeid(a).name() << endl; //int

	//암시적 형변환 : 프로그래머가 형변환을 해달라고 요청하지 않음, compiler가 자동으로 형변환을 함
	int b = 123.0; //double -> int
	cout << typeid(b).name() << endl; //int

	//numeric promotion : 담을 수 있는 메모리가 작은 변수에서 큰 변수로 전환을 했을 때는 문제가 생기지 않음
	float c = 1.0f;
	double d = a; 

	//numeric conversion
	int e = 30000;
	char f = e; //메모리 부족으로 f가 30000이라는 숫자를 담을 수 없음
	cout << static_cast<int>(f) << endl; //48

	float g = 3.14f;
	int h = g; //소수자리는 버림
	cout << h << endl; //3

	//형변환 우선순위 : int < unsigned int < long < unsigned long < long long < unsigned long long < float < double < long double
	//unsigned int의 우선순위가 int보다 더 높으므로 int로 바꾸지 않음
	cout << 5u - 10 << endl; //4294967291, 이상한 값이 나옴

	//명시적 형변환 : 프로그래머가 강제적으로 형을 변환함
	int i = int(4.0); //c++ style cast
	int j = (int)4.0; //c style cast
	int k = static_cast<int>(4.0);

	return 0;
}