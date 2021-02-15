/*
inline 키워드는 컴파일러에서 함수를 인라인 함수로 처리하도록 요청한다.
인라인 함수로 바꾸면 보통 프로그램이 더 빠르게 작동한다.
하지만, 요즘의 컴파일러는 inline 키워드를 쓰지 않아도 자체적으로 인라인으로 바꾸기도 하고
인라인 함수가 무조건적으로 빠르지도 않다는 결과가 나오고 있다.
그리고 인라인 함수를 사용하면 코드의 규묘가 커진다는 문제가 있다.
따라서 인라인 함수를 굳이 써야하는지는 의문이다.
*/

#include <iostream>

using namespace std;

inline int find_min(int a, int b)
{
	return a > b ? b : a;
}

int main()
{
	cout << find_min(3, 4) << endl;
	cout << find_min(7, 2) << endl;

	return 0;
}