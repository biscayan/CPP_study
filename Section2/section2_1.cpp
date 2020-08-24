#include <iostream>

int main()
{
	using namespace std;

	bool bValue = true;
	char chValue = 'A';
	//float은 뒤에 f를 붙여야함
	float fValue = 3.141592f;
	double dValue = 3.141592;

	//컴파일할때 자료형을 자동으로 결정
	auto aValued = 3.141592;
	auto aValuef = 3.141592f;

	//변수를 초기화하는 방법
	int a = 123; //1.copy initialization
	int a(123); //2.direct initialization
	int a{ 123 }; //3.uniform initialization

	//여러가지 변수를 한번에 설정, 단 자료형이 같아야함
	int k = 1, l = 2, m = 3;

	//bValue가 참이면1, 거짓이면 0 출력
	cout << (bValue ? 1 : 0) << endl;
	cout << chValue << endl;

	//소수는 자리수 제한이 있음
	cout << fValue << endl;
	cout << dValue << endl;
	cout << aValued << endl;
	cout << aValuef << endl;

	//변수의 사이즈를 출력
	cout<< sizeof(aValued) << endl;
	cout << sizeof(aValuef) << endl;
	//자료형을 직접 넣어줘도 됨
	cout << sizeof(char) << endl;

	return 0;
}