#include <iostream>

using namespace std;

//문제가 생길 수 있으므로 golbal variable은 최소한으로 사용하는 것이 좋다.
//global variable
int value = 123;

void dosomething()
{
	//static variable
	//static variable은 초기화를 한번만 진행함. 즉, a=1을 반복하지 않음.
	static int a = 1; //변수a가 os로부터 받은 메모리가 static임

	//미리 선언이 된 변수a를 재사용함
	++a;

	cout << a << endl;
}

//forward declaration
extern void print_hello(); //어딘가에 print_hello()의 몸체가 존재함
//void print_hello();

//external linkage : 한 cpp파일에서 사용한 변수를 다른 cpp파일에서도 사용
extern int ex_variable;
//int ex_variable;

int main()
{

	cout << value << endl; //123

	//local variable
	int value = 1;

	cout << value << endl;  //1

	//global scope operator
	cout << ::value << endl; //123

	dosomething(); //2
	dosomething(); //3
	dosomething(); //4

	//internal linkage : 개별 cpp파일 안에서만 전역으로 작동하는 변수
	//static을 사용함으로서 다른 cpp파일에서는 접근 불가능
	static int g_a = 100;

	//external linkage : 한 cpp파일에서 사용한 변수를 다른 cpp파일에서도 사용
	cout << ex_variable << endl;

	return 0;
}