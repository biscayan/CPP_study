#include <iostream>

int main()
{
	using namespace std;

	//class로 영역을 제한함

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

	//같은 영역 안에서는 비교가능
	if (color1 == color2)
		cout << "Same color" << endl;
	else
		cout << "Different color" << endl;

	/*
	//다른 영역은 비교불가능
	if (color1 == fruit1)
		cout << "Color is Fruit" << endl;
	else
		cout << "Color is not Fruit" << endl;
	*/

	return 0;
}