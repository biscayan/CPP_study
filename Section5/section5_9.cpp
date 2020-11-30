#include <iostream>
#include <cstdlib> //std::rand(), std::srand()
#include <ctime> //std::time()
#include <random> //c++ 11���� ����

using namespace std;

int main()
{
	//c style

	//seed ����
	//seed number�� ������ �Ź� ���� ��������� ����
	//������Ҷ��� seed�� ������Ű�°� ����
	//srand(5323);
	
	//cpu clock���� �ð��� ������
	//�ð��� ���鼭 ��������� �޶���
	srand(static_cast<unsigned int>(time(0)));

	for (int i = 1; i <= 100; i++)
	{
		cout << rand() << '\t';
		
		if (i % 5 == 0)
		{
			cout << endl;
		}
	}
	
	//c++style

	random_device rd;

	//���� ���� 
	//create a mersenne twister
	mt19937 mersenne(rd()); 

	//1���� 6������ ���� ���õǴµ� ������ ���� ��� ������ Ȯ���� ����
	uniform_int_distribution<>dice(1, 6);

	for (int i = 1; i <= 20; i++)
	{
		cout << dice(mersenne) << endl;
	}

	return 0;
}