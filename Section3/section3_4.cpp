#include <iostream>

int main()
{
	using namespace std;

	float flo = 3.14f;

	//sizeof�� �Լ��� �ƴ� �������̴�.
	cout << sizeof flo << endl; //������, ������ ���� ��ȣ�� ��� ��
	cout << sizeof(float) <<endl; //������Ÿ��

	//comma operator
	int x = 3;
	int y = 10;
	int z = (++x, ++y);	//��ȣ ���� �ΰ��� �����ϰ� ���� ��Ҹ� return

	cout << x << " " << y << " " << z << endl;; //4, 11, 11

	int a = 1, b = 3; //comma operator�� �ƴ�, �ܼ��� ���� ��ȣ
	int c;
	c = a, b; //�켱������Ģ�� ���Ͽ� a�� return��. =�� ,���� �켱������ ����
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