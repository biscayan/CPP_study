#include <iostream>

int main()
{
	using namespace std;

	//class�� ������ ������

	enum class Color
	{
		RED,
		BLUE
	};

	enum class Fruit
	{
		BANANA,
		APPLE
	};

	Color color1 = Color::RED;
	Color color2 = Color::BLUE;

	Fruit fruit1 = Fruit::BANANA;
	Fruit fruit2 = Fruit::APPLE;

	//���� ���� �ȿ����� �񱳰���
	if (color1 == color2)
		cout << "Same color" << endl;
	else
		cout << "Different color" << endl;

	/*
	//�ٸ� ������ �񱳺Ұ���
	if (color1 == fruit1)
		cout << "Color is Fruit" << endl;
	else
		cout << "Color is not Fruit" << endl;
	*/

	return 0;
}