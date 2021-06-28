#include <iostream>

using namespace std;

int main()
{
	int score = 92;
	int* pScore = &score;

	cout << "score俊 流立 立辟 : " << score << endl;
	cout << "score俊 埃立 立辟 : " << *pScore << endl;

	return 0;
}