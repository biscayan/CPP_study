#include <iostream>

using namespace std;

int main()
{
	int line;

	cout << "변의 길이를 입력하세요 : ";
	cin >> line;

	cout << "정사각형의 면적 : " << line * line << endl;
	cout << "정사각형의 둘레 : " << line * 4 << endl;

	return 0;
}