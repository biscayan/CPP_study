#include <iostream>

int main()
{
	using namespace std;

	float flo = 3.14f;

	//sizeof는 함수가 아닌 연산자이다.
	cout << sizeof flo << endl; //변수명, 변수일 때는 괄호가 없어도 됨
	cout << sizeof(float) <<endl; //데이터타입

	//comma operator
	int x = 3;
	int y = 10;
	int z = (++x, ++y);	//괄호 안의 두개를 진행하고 뒤의 요소를 return

	cout << x << " " << y << " " << z << endl;; //4, 11, 11

	int a = 1, b = 3; //comma operator가 아님, 단순한 구분 기호
	int c;
	c = a, b; //우선순위법칙에 의하여 a가 return됨. =가 ,보다 우선순위가 높음
	cout << c << endl;

	//conditional operator (arithmetric if)
	bool onsale = true;
	int price;

	if (onsale)
		price = 10;
	else
		price = 100;

	//const int price = (onsale == true) ? 10 : 100;

	cout << price << endl;

	int num = 5;
	cout << ((num % 2 == 0) ? "even" : "odd") << endl;

	return 0;
}