#include <iostream>

using namespace std;


struct Something
{
	int v1;
	float f1;
};

struct Other
{
	Something st;
};

int main()
{
	int value = 5;

	int& ref = value;

	int* ptr = &value;

	cout << ref << endl; //5

	ref = 10;

	// ref값을 바꾸면서 value값도 같이 바뀜
	cout << value << " " << ref << endl; //10 10

	//ref 가 value와 같은 주소를 공유함 ptr은 별도의 주소를 가지고 있음
	cout << &value << endl; //00AFFD40
	cout << &ref << endl; //00AFFD40
	cout << ptr << endl; //00AFFD40
	cout << &ptr << endl; //00AFFD28

	/*
	reference는 변수명으로 초기화해주어야 하고 const도 사용 불가능
	const int value = 3; 
	int& ref = value; 불가능
	const int& ref = value; reference도 const일 때는 가능
	int& ref = 3; 불가능
	*/
	
	//reference를 통해 복잡한 것을 간단하게 표현
	Other ot;
	int& v1 = ot.st.v1;
	v1 = 3;

	return 0;
}