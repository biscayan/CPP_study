//��ũ�δ� ���� �빮�ڷ� ��
//��ũ�θ� ���� ���� ������ ����
//��ũ���� ������� JACKPOT�� ������ ��� 777�� ��ü��Ŵ
#define JACKPOT 777
#define MAX(a,b) ((a>b) ? a : b)
#define LIKE_APPLE

#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	cout << MAX(1, 2) << endl;

	//max����� algorithm library�ȿ� ����
	cout << max(1 + 3, 2) << endl;

	//conditional compilation
	//���� LIKE_APPLE�̶�� ��ũ�ΰ� ������ (if defined),
#ifdef LIKE_APPLE
	cout << "APPLE" << endl;
#endif
	//LIKE_APPLE�̶�� ��ũ�ΰ� ������ (if not defined),
#ifndef LIKE_APPLE
	cout << "ORANGE" << endl;
#endif

}