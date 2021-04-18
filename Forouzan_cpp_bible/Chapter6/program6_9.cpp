#include <iostream>

using namespace std;

void pattern(int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

int main()
{	
	int pattern_size;

	do
	{
		cout << "패턴의 사이즈를 입력하세요 : ";
		cin >> pattern_size;
	} while (pattern_size <= 0);

	// 패턴 출력
	pattern(pattern_size);

	return 0;
}