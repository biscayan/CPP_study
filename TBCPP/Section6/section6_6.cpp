#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char mystring[] = "string"; //마지막에 보이지 않는 null character("\0")가 있음

	for (int i = 0; i < 7; ++i)
	{
		cout << (int)mystring[i] << endl; //115 116 114 105 110 103 0
	}

	//몇글자가 들어올지 모르니 255라는 큰 숫자로 잡음
	char mystring2[255];

	cin >> mystring2;

	cout << mystring2 << endl;

	//c style
	char source[] = "Copy!!";
	char destination[50];

	strcpy_s(destination, source); //문자열 복사
	strcat_s(destination, source); //문자열 합치기

	//두 문자열이 동일한지 비교
	//문자열이 같으면 0, 아스키 값이 str1>str2이면 1, str1<str2이면 -1 리턴
	cout << strcmp(mystring, source) << endl;; 

	return 0;
}