#include <iostream>

using namespace std;

int add(int a, int b)
{
	//indenting은 space 4번, tab등 의견 차이가 있음
	//return a+b; -> 좋지않음, 띄어쓰기를 하자!
	return a + b;
}

int main()
{
	//줄바꿈, operator를 뒤에 남겨놓는 것이 좋음
	cout << "Hello world " << "abcdef " << 
		"Hello home" << endl;

	return 0;
}